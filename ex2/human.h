/* OMER BARAK - 313264053 */

#ifndef EX2NEW_PLAYER_H
#define EX2NEW_PLAYER_H

class Human {
 private:
  // Symbol to represent the player e.g. 'X', 'O'.
  char symbol_;

  // How many pieces does the player have.
  int score_;

 public:
  // This is the constructor for Human. It receives a symbol to represent
  // the player and sets it accordingly.
  explicit Human(char symbol);

  // Destructor is default.
  ~Human();

  // Returns the symbol of the player.
  char getSymbol() const;

  // Returns the score of the player.
  int getScore() const;

  // Increases the player's score by one.
  void increaseScore();

  // Decreases the player's score by one.
  void decreaseScore();

  // Override for the '==' operator so players can be compared.
  bool operator==(const Human &player) const;

  // Override for the '!=' operator so players can be compared.
  bool operator!=(const Human &player) const;

  // Compares the score between current player and given player.
  // Returns 1 if current player is higher, -1 if given player is higher
  // and 0 if equal.
  int compareScore(Human *p) const;
};

#endif //EX2NEW_PLAYER_H
