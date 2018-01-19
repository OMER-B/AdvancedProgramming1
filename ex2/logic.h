/* OMER BARAK - 313264053 */

#ifndef EX2NEW_LOGIC_H
#define EX2NEW_LOGIC_H

#include <vector>
#include "human.h"
#include "board.h"

using namespace std;

// The Logic father class. it is an abstract class that defines the main
// concerns of the game's logic.
class Logic {
 public:
  // Constructor for Logic.
  Logic();

  // Destructor for Logic.
  virtual ~Logic();

  // Returns a vector of possible moves for the player depending on the logic.
  virtual const vector<Cell> getMoves(Board &b, Human p) const = 0;

  // Makes moves depending on the logic.
  virtual vector<Cell *> makeMove(Board &b, int startX, int startY,
                                  Human *player) = 0;

  // Returns boolean to check if a move is valid or not, depending on the logic.
  virtual bool isValidMove(Board &board, int startX,
                           int startY, Human p) const = 0;

  // Returns the winner player of the game. Winner is whoever has more cells
  // occupied.
  Human getWinner(Human *p[]);

  // Returns a bool if the given players are not the same.
  bool isEnemy(Human p1, Human p2) const;

  // Updates the scores of the players depending on the counting method.
  virtual void updateScore(Human *prevPlayer, Human *currPlayer) = 0;
};

#endif //EX2NEW_LOGIC_H
