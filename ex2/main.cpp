/* OMER BARAK - 313264053 */

#include <iostream>
#include "game.h"

using namespace std;

int main() {
  Game *game = new Game();
  game->run();
  delete game;
  return 0;
}