/* OMER BARAK - 313264053 */

#include "regLogic.h"

using namespace std;

RegLogic::RegLogic() {

}

RegLogic::~RegLogic() {

}

const vector<Cell> RegLogic::getMoves(Board &b, Human p) const {
  vector<Cell> moves;

  /* Go over every cell in the board */
  for (int x = 0; x < b.getX(); x++) {
    for (int y = 0; y < b.getY(); y++) {

      /* If cell is a valid move, add it to the vector */
      bool iff1 = isValidMove(b, x, y, p);
      bool iff2 = b.getCell(x, y)->isEmpty();
      if (iff1 && iff2) {
        Cell cell(x, y);
        moves.push_back(cell);
        for (unsigned int i = 0; i < moves.size(); i++) {
        }
      }
    }
  }
  return moves;
}

bool RegLogic::isValidMove(Board &board, int startX,
                           int startY, Human player) const {
  if (!board.getCell(startX, startY)->isEmpty()) {
    return false;
  }
  /* Go over all cells around cell */
  for (int adjX = -1; adjX <= 1; adjX++) {
    for (int adjY = -1; adjY <= 1; adjY++) {

      /* Skip cells out of boundaries and current cell */
      bool inBounds = board.inBoundaries(startX + adjX, startY + adjY);
      if (!inBounds) {
        continue;
      }
      bool isCurrentCell = adjX == 0 && adjY == 0;
      Cell *c = board.getCell(startX + adjX, startY + adjY);
      if (c->getPlayer() == NULL) {
        continue;
      }
      bool isPlayer = *(c->getPlayer()) == player;
      if (isCurrentCell || isPlayer) {
        continue;
      }
      /* Check if cell is enemy */
      Human enemy = *board.getCell(startX + adjX,
                                   startY + adjY)->getPlayer();
      if (isEnemy(player, enemy)) {

        /* If cell is enemy, move in direction  */
        /* until outside of boundaries or empty */
        int validX = startX + adjX, validY = startY + adjY;

        while (true) {
          validX += adjX;
          validY += adjY;
          if (!board.inBoundaries(validX, validY)
              || board.getCell(validX, validY)->isEmpty()) {
            break;
          }
          /* If cell is player, return true */
          if (*board.getCell(validX, validY)->getPlayer() == player) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

vector<Cell *> RegLogic::makeMove(Board &board, int startX, int startY, Human
*player) {
  vector<Cell *> moves;
  for (int adjX = -1; adjX <= 1; adjX++) {
    for (int adjY = -1; adjY <= 1; adjY++) {
      /* Skip cells out of boundaries and current cell */
      bool inBounds = board.inBoundaries(startX + adjX, startY + adjY);
      if (!inBounds) {
        continue;
      }
      bool isCurrentCell = adjX == 0 && adjY == 0;
      Cell *c = board.getCell(startX + adjX, startY + adjY);
      if (c->getPlayer() == NULL) {
        continue;
      }
      bool isPlayer = *(c->getPlayer()) == *player;
      if (isCurrentCell) {
        continue;
      }
      if (isPlayer) {
        continue;
      }
      bool stop = false;
      /* Check if cell is enemy */
      Human enemy = *board.getCell(startX + adjX, startY + adjY)->getPlayer();
      if (isEnemy(*player, enemy)) {

        /* If cell is enemy, move in direction  */
        /* until outside of boundaries or empty */
        int validX = startX + adjX, validY = startY + adjY;
        while (true) {
          validX += adjX;
          validY += adjY;
          if (!board.inBoundaries(validX, validY)
              || board.getCell(validX, validY)->isEmpty()) {
            break;
          }
          if (stop == true)
            break;

          /* If cell is player, go backwards and flip all cells */
          /* along the way to the current player                */
          if (*board.getCell(validX, validY)->getPlayer() == *player) {
            while (true) {
              if (board.getCell(validX, validY) == NULL) {
                break;
              }
              if (board.getCell(validX, validY)
                  == board.getCell(startX, startY)) {
                stop = true;
                break;
              }
              validX -= adjX;
              validY -= adjY;
              moves.push_back(board.getCell(validX, validY));
              Human
                  *prevPlayer = board.getCell(validX, validY)->getPlayer();
              updateScore(prevPlayer, player);
              board.getCell(validX, validY)->fill(player);

            }
          }
        }
      }
    }
  }
  board.getCell(startX, startY)->fill(player);
  return moves;
}

void RegLogic::updateScore(Human *prevPlayer, Human *currPlayer) {
  if (currPlayer != prevPlayer) {
    currPlayer->increaseScore();
    if (prevPlayer != NULL) {
      prevPlayer->decreaseScore();
    }
  }
}

