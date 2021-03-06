/* OMER BARAK       313264053 */
/* HODAYA KOSLOWSKY 313377673 */

#ifndef EX3_PLAYER_H
#define EX3_PLAYER_H

#include <iostream>

class Logic;
class Board;

class Player {
 private:
  // Symbol to represent the player e.g. 'X', 'O'.
  char symbol_;

  // How many pieces does the player have.
  int score_;

 public:
  // This is the constructor for Human. It receives a symbol to represent
  // the player and sets it accordingly.
  explicit Player(char symbol);

  // Destructor is default.
  virtual ~Player();

  // Returns the symbol of the player.
  char getSymbol() const;

  // Returns the score of the player.
  int getScore() const;

  void setScore(int score);

  // Increases the player's score by one.
  void increaseScore();

  // Decreases the player's score by one.
  void decreaseScore();

  // Override for the '==' operator so players can be compared.
  bool operator==(const Player &player) const;

  // Override for the '!=' operator so players can be compared.
  bool operator!=(const Player &player) const;

  // Compares the score between current player and given player.
  // Returns 1 if current player is higher, -1 if given player is higher
  // and 0 if equal.
  int compareScore(Player *player) const;

  // Makes move depending on the player type.
  virtual int makeMove(Board &board, Logic &logic) = 0;
};

// Prints the player as its symbol.
std::ostream &operator<<(std::ostream &out, Player const &player);

#endif //EX3_PLAYER_H
