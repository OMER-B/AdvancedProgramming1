/* OMER BARAK - 313264053 */

#ifndef REGLOGIC_H
#define REGLOGIC_H

#include <vector>
#include "board.h"
#include "logic.h"

using namespace std;

// Class RegLogic inherits from Logic. it uses the regular logic where you
// can only place on adjacent cells.
class RegLogic : public Logic {
 public:
  // Constructor for RegLogic.
  RegLogic();

  // Destructor for RegLogic.
  ~RegLogic();

  // Checks if a cell is valid for movement by going over all cells around
  // candidate ce// Class for the player. Black or White.
  //ll, and if adjacent cell it an enemy, goes in same
  // direction until outside of boundaries or cell is empty. If cell is
  // (same) player, returns true.
  bool isValidMove(Board &board, int startX, int startY, Human p) const;

  // for every cell on the board, check if it is valid move for Human p,
  // and if yes, add it to the vector.
  const vector<Cell> getMoves(Board &b, Human p) const;

  // Same algorithm as validMove() but goes backwards and flips all enemy
  // tiles instead of returning.
  vector<Cell*> makeMove(Board &b, int startX, int startY,
                Human *player);

    // Updates the score of current player and previews player who occupied the
  // Cell. Usually used when flipping a cell.
  void updateScore(Human *prevPlayer, Human *currPlayer);
};

#endif //REGLOGIC_H
