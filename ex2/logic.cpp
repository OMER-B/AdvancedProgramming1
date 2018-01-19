/* OMER BARAK - 313264053 */

#include "logic.h"

Logic::Logic() {

}

Logic::~Logic() {

}

Human Logic::getWinner(Human *p[]) {
  if (p[0]->compareScore(p[1]) == 1) {
    return *p[0];
  }
  return *p[1];
}

bool Logic::isEnemy(Human p1, Human p2) const {
  if (p2.getSymbol() == 0 || p2.getSymbol() == 0) {
    return false;
  }
  return p1 != p2;
}
