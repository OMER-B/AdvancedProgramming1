#include "server.h"
#include "../tools.h"
#include <unistd.h>
#include <string.h>
#include <fstream>
#include <arpa/inet.h>
#include <cstdlib>

using namespace std;

Server::Server(int port) : serverSocket_(0) {
  pool = new ThreadPool(THREADS_NUM);
  tasks = new vector<Task *>();
  //TODO delete all tasks
  threads_ = new vector<pthread_t *>();
  port_ = port;
  lobby_ = new Lobby;
  handleGame_ = new HandleGame;
  manager_ = CommandsManager::getInstance(lobby_, handleGame_, pool, threads_);
  stop_ = false;
}

Server::Server(char *fileName) {
  pool = new ThreadPool(THREADS_NUM);
  tasks = new vector<Task *>();
  threads_ = new vector<pthread_t *>();
  lobby_ = new Lobby;
  handleGame_ = new HandleGame;
  manager_ = CommandsManager::getInstance(lobby_, handleGame_, pool, threads_);
  stop_ = false;
  ifstream inFile;
  inFile.open(fileName);
  inFile >> port_;
  inFile.close();
}

void Server::start() {
// Create a socket point
  serverSocket_ = socket(AF_INET, SOCK_STREAM, 0);
  if (serverSocket_ == -1) {
    throw "Error opening socket";
  }
  // Assign a local address to the socket
  struct sockaddr_in serverAddress;
  bzero((void *) &serverAddress,
        sizeof(serverAddress));
  serverAddress.sin_family = AF_INET;
  serverAddress.sin_addr.s_addr = INADDR_ANY;
  serverAddress.sin_port = htons(port_);
  if (bind(serverSocket_,
           (struct sockaddr *) &serverAddress,
           sizeof(serverAddress)) == -1) {
    throw "Error on binding";
  }
  cout << "Binding succeeded. Server is up." << endl;

  Task *exitTask = new Task(shouldStop, (void *) this);
  pool->addTask(exitTask);
  tasks->push_back(exitTask);

  int listening = listen(serverSocket_, MAX_CONNECTED_CLIENTS);
  struct sockaddr_in clientAddress;
  socklen_t clientAddressLen;

  while (!stop_) {
    // Accept a new clients connections.
    int clientSocket = accept(serverSocket_,
                              (struct sockaddr *) &clientAddress,
                              &clientAddressLen);
    if (clientSocket == -1) {
      throw "error accepting client";
    }

    //handle each new client in a new TASK
    Task *handleClientTask = new Task(handleClient, &clientSocket);
    pool->addTask(handleClientTask);
    tasks->push_back(handleClientTask);
  }
}

void *Server::handleClient(void *args) {
  int clientSocket = *((int *) args);

  CommandsManager *manager = CommandsManager::getInstance();

  bool shoulContinue = true;

  // recieve command from the player and send to the matching function
  while (shoulContinue) {
    char input[BUFFER];
    memset(input, 0, sizeof(input));

    cout << "connected to client: " << clientSocket << endl;
    ssize_t n = read(clientSocket, &input, sizeof(input));
    if ((n == -1) || (n == 0)) {
      close(clientSocket);
      throw "Failed to receive read from client";
    }

    // seperate the command to the function and its arguments
    string stringArgs;

    pair<string, string> result;
    result = manager->seperate(input);

    string command = result.first;
    stringArgs = result.second;

    //some commands return true -> the loop of getting new commands should continue
    if (manager->isLegalCommand(command, clientSocket)) {
      shoulContinue = manager->executeCommand(command,
                                              stringArgs,
                                              clientSocket);
    } else {
      cout << "Illegal command" << endl;
      close(clientSocket);
      break;
    }

  }
}

Server::~Server() {
  stop();
  close(serverSocket_);
  delete pool;
  delete tasks;
  delete lobby_;
  delete manager_;
  delete handleGame_;
  delete threads_;
}

void Server::stop() {
  //stop the server and close all the room and sockets

  cout << "Closing the server..." << endl;
  stop_ = true;

  for (vector<pthread_t *>::iterator it = threads_->begin();
       it != threads_->end(); ++it) {
    pthread_cancel(**it);

  }

  for (vector<Task *>::iterator it = tasks->begin();
       it != tasks->end(); ++it) {
    delete *it;
  }

  map<string, Room *> *mappa = lobby_->getMap();
  char close[] = "close";
  for (map<string, Room *>::iterator it = mappa->begin(); it != mappa->end();
       ++it) {
    cout << "Closing room '" << (*it).second->getName() << "'" << endl;

    // send a close message to the clients
    ssize_t n = write((*it).second->getFirstClient(), &close, sizeof(close));
    n = write((*it).second->getSecondClient(), &close, sizeof(close));
  }
  pool->terminate();
  exit(0);
}

void *Server::shouldStop(void *serv) {
  // get the exit command in the server command line, and close the game

  Server *server = (Server *) serv;
  string exit;
  cout << "Type 'exit' to close the server." << endl;
  while (true) {
    cin.clear();
    cin >> exit;
    if (exit == "exit") {
      server->stop();
      break;
    }
  }
}
