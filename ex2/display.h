/* OMER BARAK - 313264053 */

#ifndef EX2_DISPLAY_H
#define EX2_DISPLAY_H

#include "board.h"

// A father class for the different display options: GUI or console.
class Display {
 public:

  // Will print the board depending on the display type.
  virtual void printBoard(Board *b) = 0;
};

#endif //EX2_DISPLAY_H
