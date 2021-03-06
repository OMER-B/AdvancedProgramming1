/* OMER BARAK       313264053 */
/* HODAYA KOSLOWSKY 313377673 */

#ifndef EX2_DISPLAY_H
#define EX2_DISPLAY_H

#include "board.h"

// A father class for the different display options: GUI or console.
class Display {
 public:
  // Virtual destructor for Display.
  virtual ~Display() = 0;

  // Prints the board depending on the display type.
  virtual void printBoard(Board *b) = 0;
};

// Destructor for the board.
inline Display::~Display() {}

#endif //EX2_DISPLAY_H
