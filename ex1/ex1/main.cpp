#include <iostream>
#include "board.h"

using namespace std;

// The main functions creates a new board, draws it and frees the memory.
int main() {
  Board *board = new Board();
  board->drawBoard();
  delete board;
  return 0;
}
