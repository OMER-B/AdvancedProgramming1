/* OMER BARAK - 313264053 */

#ifndef EX2NEW_BOARD_H
#define EX2NEW_BOARD_H

#include "cell.h"

class Board {
 private:
  /* The width (x) and height (y) of the board */
  int x_, y_;

  /* The board is represented as a 2d array of cells. */
  Cell **cells_;

 public:
  /* Constructor for board. x and y are defaulted to 8. */
  explicit Board(int x = 8, int y = 8, Human *players[] = NULL);

  /* Destructor for the board. Deleted the 2d array. */
  ~Board();

  /* Initializes the board with given players at the middle. */
  void initialize(Human *const players[]);

  /* Returns a specific cell on the board. */
  Cell *getCell(int i, int j) const;

  /* Checks if given coordinate is outside of the board's boundaries. */
  bool inBoundaries(int x, int y) const;

  /* Returns the width of the board. */
  int getX() const;

  /* Returns the height of the board. */
  int getY() const;
};

#endif //EX2NEW_BOARD_H
