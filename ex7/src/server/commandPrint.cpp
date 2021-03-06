#include <unistd.h>
#include <cstring>
#include "commandPrint.h"
#include "../tools.h"


CommandPrint::CommandPrint(Lobby *lobby) {
  lobby_ = lobby;
}

bool CommandPrint::execute(string arg, int clientSocket) {
  char list[BUFFER];
  string listOfRooms;
  vector<string> games = lobby_->getListOfRooms();
  if (games.empty()) {
    strcpy(list, "There are no games yet.\n");
  } else {
    for (int i = 0; i < games.size(); i++) {
      listOfRooms += games[i] + ", ";
    }
    listOfRooms += "\n";
    strcpy(list, listOfRooms.c_str());
  }
  cout << "Sending to socket " << clientSocket << " list of rooms: "
       << listOfRooms << endl;
  ssize_t n = write(clientSocket, &list, sizeof(list));
  if (n == -1) {
    throw "Error sending list of games";
  }
  if (n == 0) {
    throw "could not send list of games";
  }
  return true;
}