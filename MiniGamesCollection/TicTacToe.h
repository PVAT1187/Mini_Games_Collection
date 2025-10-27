#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "Game.h"

constexpr int GRID_SIZE = 3;

class TicTacToe : public Game
{
	public:
		TicTacToe();

		void run() override;

		void getPlayerChoice();
		void getComputerChoice() override;
		
		Game::Result determineWinner() const override;

		void switchPlayer();

		char getCell(int row, int column) const;
		char getCurrentPlayer() const;

		bool isValidMove(int row, int column) const;

		std::string choiceToString(int choice) const override;

	private:
		char board[GRID_SIZE][GRID_SIZE];
		char currentPlayer;

		bool isWin() const;
		bool isDraw() const;

		void resetBoard();
};

#endif // !TICTACTOE_H
