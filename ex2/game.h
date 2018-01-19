/* OMER BARAK - 313264053 */

#ifndef EX2NEW_GAME_H
#define EX2NEW_GAME_H

#include "board.h"
#include "regLogic.h"
#include "display.h"
#include "consoleDisplay.h"

class Game {
 private:
  // Currently set for a game of two players.
  static const int playersSize_ = 2;

  // The board of the game.
  Board *board_;

  // The logic of the game.
  RegLogic *logic_;

  // The display type of the game.
  ConsoleDisplay *display_;

  // An array of players playing.
  Human *players_[playersSize_];

  // Few integers. Can tell from their names.
  int numberOfPlayers_, validTurns_, currentPlayer_;

  // Takes input from the player and plays. Helper function for playOneTurn()
  // is why it is private. No one else should use it.
  void takeInput(vector<Cell> &moves);

 public:
  // Constructor for game.
  Game();

  // Destructor for game. Deleted everything that is allocated.
  ~Game();

  // Plays one turn in the current game.
  void playOneTurn();

  // Starts to play the game until no more valid moves.
  void run();

  // Returns a boolean if the game should stop or continue playing.
  bool shouldStop();
};

#endif //EX2NEW_GAME_H
