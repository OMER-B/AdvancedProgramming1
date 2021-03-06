#ifndef REVERSI_COMMANDCLOSE_H
#define REVERSI_COMMANDCLOSE_H

#include "command.h"
#include "Lobby.h"
#include "ThreadPool.h"
#include <iostream>
#include <vector>
using namespace std;

class CommandClose : public Command {
 private:
  ThreadPool *pool_;
  Lobby *lobby_;
  vector<pthread_t *> *threads_;

 public:
  // Constructor for close command.
  CommandClose(Lobby *lobby, ThreadPool *pool, vector<pthread_t *> *threads);

  // Currently unused command for closing the players' sockets.
  bool execute(string arg, int clientSocket);
};

#endif //REVERSI_COMMANDCLOSE_H