/* OMER BARAK - 313264053 */

#include "board.h"

using namespace std;

Board::Board(int x, int y, Human *players[]) {
  x_ = x;
  y_ = y;
  cells_ = new Cell *[x_];
  for (int i = 0; i < x_; ++i) {
    cells_[i] = new Cell[y_];
  }
  Board::initialize(players);
}

Board::~Board() {
  for (int i = 0; i < x_; ++i)
    delete[] cells_[i];
  delete[] cells_;
}

void Board::initialize(Human *const players[]) {
  for (int i = 0; i < x_; i++) {
    for (int j = 0; j < y_; j++) {
      cells_[i][j].setX(i);
      cells_[i][j].setY(j);
    }
  }

  cells_[(x_ / 2) - 1][(y_ / 2) - 1].fill(players[1]);
  cells_[(x_ / 2) - 1][(y_ / 2)].fill(players[0]);
  cells_[(x_ / 2)][(y_ / 2) - 1].fill(players[0]);
  cells_[(x_ / 2)][(y_ / 2)].fill(players[1]);
}

Cell *Board::getCell(int i, int j) const {
  return &cells_[i][j];
}

bool Board::inBoundaries(int x, int y) const {
  return (x >= 0 && y >= 0 && x < x_ && y < y_);
}

int Board::getY() const {
  return y_;
}

int Board::getX() const {
  return x_;
}
