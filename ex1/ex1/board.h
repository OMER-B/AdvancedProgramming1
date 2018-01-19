#ifndef BOARD_H_
#define BOARD_H_

/*
 * In charge of the board of the game. Draws and initializes it.
 * Example:
 *   Board *board = new Board(8,8);
 *   Board.initialize();
 *   Board.drawBoard();
 *   delete board;
 */
class Board {
private:
  // How many cells the board will have. Assigned xDim and yDim.
  int x_, y_;

  // Array of cells AKA the board.
  char **cells_;

public:
  /*
   * Constructor for the board, gets x_ and y_ dimensions
   * and calls the initialization function.
   */
  Board(int xDimension = 8, int yDimension = 8);
  /*
   * Destructor for the board.
   * Has a loop to delete the dynamically allocated board.
   */
  ~Board();

  // Draws the board. Returns nothing.
  void drawBoard() const;

  // Initializes the board with players in the middle. Returns nothing.
  void initialize();
};

#endif /* BOARD_H_ */
