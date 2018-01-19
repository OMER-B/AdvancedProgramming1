#include <iostream>
#include "board.h"

using namespace std;

Board::Board(int xDimension, int yDimension) {
  x_ = xDimension;
  y_ = yDimension;
  cells_ = new char *[x_];
  Board::initialize();
}

Board::~Board() {
  for (int i = 0; i < x_; i++)
    delete[] cells_[i];
  delete[] cells_;
}

void Board::initialize() {
  for (int i = 0; i < x_; i++) {
    cells_[i] = new char[y_];
  }
  /* fill empty cells START */
  for (int i = 0; i < x_; i++) {
    for (int j = 0; j < y_; j++) {
      cells_[i][j] = ' ';
    }
  }
  /* fill empty cells END */

  /* fill empty cells START */
  cells_[(x_ / 2) - 1][(y_ / 2) - 1] = 'O';
  cells_[(x_ / 2) - 1][(y_ / 2)] = 'X';
  cells_[(x_ / 2)][(y_ / 2) - 1] = 'X';
  cells_[(x_ / 2)][(y_ / 2)] = 'O';
  /* fill player cells END */
}


void Board::drawBoard() const {
  /* top numbers START */
  cout << " | ";
  for (int i = 1; i <= x_; i++) {
    cout << i << " | ";
  }
  cout << endl;
  cout << string(x_ * 4.3, '-') << endl;
  /* top numbers END */

  /* board cells START */
  for (int i = 0; i < x_; i++) {
    cout << i + 1 << "| ";

    for (int j = 0; j < y_; j++) {
      cout << cells_[i][j] << " | ";
    }
    cout << endl << string(x_ * 4.3, '-') << endl;
  }
  /* board cells END */
}
