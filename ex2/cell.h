/* OMER BARAK - 313264053 */

#ifndef EX2NEW_CELL_H
#define EX2NEW_CELL_H

#include <iostream>
#include <ostream>
#include "human.h"

class Cell {
 private:
  // x, y are coordinates for the cell.
  int x_, y_;
 public:
  int getX_() const;
  int getY_() const;
 private:

  // The player who occupies the cell.
  Human *player_;

 public:
  // Constructor for cell receives x, y coordinates
  explicit Cell(int x = 0, int y = 0);

  // Destructor for cell.
  ~Cell();

  // Returns the player who occupies the cell.
  Human *getPlayer();

  // Sets x coordinate for the cell.
  void setX(int x_);

  // Sets y coordinate for the cell.
  void setY(int y_);

  // Returns a string representation of the cell (AKA symbol of the player).
  char getString() const;

  // A boolean to check if the cell is empty or not.
  bool isEmpty();

  // Fills the cell with given player.
  void fill(Human *p);

  // Prints the cell as (x, y).
  void printCell() const;

  // Compares two cells.
  bool operator==(const Cell &otherCell) const;
};

#endif //EX2NEW_CELL_H
