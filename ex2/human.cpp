/* OMER BARAK - 313264053 */

#include <exception>
#include "human.h"

Human::Human(char symbol) {
  symbol_ = symbol;
  score_ = 2;
}

char Human::getSymbol() const {
  try {
    if (this) {
      return symbol_;
    }
  } catch (std::exception &) {
    return '.';
  }
}

int Human::getScore() const {
  return score_;
}

void Human::increaseScore() {
  score_++;
}

void Human::decreaseScore() {
  score_--;
}

bool Human::operator==(const Human &player) const {
  return symbol_ == player.getSymbol();
}

bool Human::operator!=(const Human &player) const {
  return symbol_ != player.getSymbol();
}

Human::~Human() {

}

int Human::compareScore(Human *p) const {
  if (score_ > p->getScore()) {
    return 1;
  }
  if (score_ < p->getScore()) {
    return -1;
  }
  return 0;
}
