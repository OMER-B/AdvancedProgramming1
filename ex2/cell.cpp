/* OMER BARAK - 313264053 */

#include "cell.h"

using namespace std;

Cell::Cell(int x, int y) : player_(NULL) {
  x_ = x;
  y_ = y;
}

Cell::~Cell() {

}

Human *Cell::getPlayer() {
  return player_;
}

void Cell::setX(int x) {
  x_ = x;
}

void Cell::setY(int y) {
  y_ = y;
}

char Cell::getString() const {
  if (player_->getSymbol()) {
    return player_->getSymbol();
  }
  return ' ';
}

void Cell::printCell() const {
  cout << "(" << x_ + 1 << ", " << y_ + 1 << ")";
};

bool Cell::isEmpty() {
  return player_->getSymbol() == 0;
}

void Cell::fill(Human *p) {
  player_ = p;
}

int Cell::getX_() const {
  return x_;
}

int Cell::getY_() const {
  return y_;
}

bool Cell::operator==(const Cell &otherCell) const {
  return x_ == otherCell.getX_() && y_ == otherCell.getY_();
}