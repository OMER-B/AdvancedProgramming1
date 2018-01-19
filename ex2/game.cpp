/* OMER BARAK - 313264053 */

#include <limits>
#include "game.h"

#define SIZE 8
Game::~Game() {
  delete board_;
  delete display_;
  delete logic_;
  delete players_[0];
  delete players_[1];
}

Game::Game() : players_(), numberOfPlayers_(), validTurns_(), currentPlayer_() {
  players_[0] = new Human('X');
  players_[1] = new Human('O');
  display_ = new ConsoleDisplay();
  board_ = new Board(SIZE, SIZE, players_);
  logic_ = new RegLogic();
}

void Game::run() {
  cout << endl << "First player will be BLACK. "
       << endl << "Enter coordinates in the following format: 'x y'"
       << endl << endl;

  numberOfPlayers_ = (sizeof(players_) / sizeof(players_[0]));

  /* Game loop */
  while (!shouldStop()) {
    playOneTurn();
  }
  Human winner = logic_->getWinner(players_);
  cout << "No more moves to play." << endl << "Winner is: '"
       << winner.getSymbol() << "' with score of "
       << winner.getScore() << endl;
}

void Game::playOneTurn() {
  cout << "CURRENT BOARD:\t\t\t\t\t\t\t";
  for (int i = 0; i < numberOfPlayers_; i++) {
    cout << players_[i]->getSymbol() << ":"
         << players_[i]->getScore() << "\t\t";
  }
  cout << endl;
  display_->printBoard(board_);
  cout << players_[currentPlayer_]->getSymbol() << ", It's your turn." << endl;
  vector<Cell> moves = logic_->getMoves(*board_, *players_[currentPlayer_]);
  if (!moves.empty()) {
    takeInput(moves);
  } else {
    currentPlayer_ = (currentPlayer_ + 1) % numberOfPlayers_;
    cout << "No valid moves for '" << players_[currentPlayer_]->getSymbol();
    cout << "'. Trying next player: '"
         << players_[currentPlayer_]->getSymbol() << "'" << endl << endl;
    ++validTurns_;
  }
}

void Game::takeInput(vector<Cell> &moves) {
  int moveX = -1, moveY = -1;
  cout << "Your possible moves are: ";
  for (unsigned int i = 0; i < moves.size(); i++) {
    moves[i].printCell();
  }
  moves.clear();
  bool inBoundaries;

  while (true) {
    cout << endl << "Enter your move 'row col': ";
    cin >> moveX >> moveY;

    /* Check if input is an integer */
    if (cin.fail()) {
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    /* Minus one for indexes */
    moveX--;
    moveY--;

    if (!(inBoundaries = board_->inBoundaries(moveX, moveY))) {
      cout << "Out of boundaries. Try again.";
      continue;
    }
    break;
  }

  /* Check if input is within boundaries */
  bool isValidMove =
      logic_->isValidMove(*board_, moveX, moveY, *players_[currentPlayer_]);

  if (inBoundaries && isValidMove) {
    vector<Cell *> moves = logic_->makeMove(*board_, moveX, moveY,
                                            players_[currentPlayer_]);
    for (unsigned int i = 0; i < moves.size(); i++) {
      if (moves.at(i) != NULL) {
//        cout < "???";
      }
      moves.at(i)->fill(players_[currentPlayer_]);
    }
    validTurns_ = 0;
  } else {
    cout << "Invalid move. Try again." << endl;
    currentPlayer_ = (currentPlayer_ - 1) % numberOfPlayers_;
  }
  currentPlayer_ = (currentPlayer_ + 1) % numberOfPlayers_;
}

bool Game::shouldStop() {
  return validTurns_ == 2;
}



