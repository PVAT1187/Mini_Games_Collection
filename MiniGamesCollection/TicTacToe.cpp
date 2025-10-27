#include "TicTacToe.h"
#include "TicTacToeInterface.h"

using namespace std;

TicTacToe::TicTacToe()
{
	resetBoard();
	currentPlayer = 'X';
}

void TicTacToe::run()
{
	TicTacToeInterface tttInterface;
	
	tttInterface.displayGameTitle();

	do
	{
		resetBoard();
		currentPlayer = 'X';
		bool gameOver = false;

		while (!gameOver)
		{
			tttInterface.displayBoard(*this);
			getPlayerChoice();

			Game::Result result = determineWinner();

			if (result != Game::Result::InProgress)
			{
				tttInterface.displayBoard(*this);
				tttInterface.displayWinner(result);
				gameOver = true;
			}
			else
			{
				switchPlayer();
			}
		}
	} while (tttInterface.promptForPlayAgain());

	tttInterface.displayThanksForPlaying();
}

void TicTacToe::getPlayerChoice()
{
	TicTacToeInterface tttInterface;
	
	int row = -1;
	int column = -1;
	while (true)
	{
		tttInterface.promptForPlayerChoice(*this, row, column);

		if (isValidMove(row, column))
		{
			board[row][column] = currentPlayer;
			break;
		}
		else
		{
			tttInterface.displayInvalidChoiceMessage();
		}
	}
}

void TicTacToe::getComputerChoice()
{
	int row = 0;
	int column = 0;
	do {
		row = rand() % GRID_SIZE;
		column = rand() % GRID_SIZE;
	} while (!isValidMove(row, column));

	board[row][column] = currentPlayer;
}

Game::Result TicTacToe::determineWinner() const
{
	if (isWin())
	{
		if (currentPlayer == 'X')
		{
			return Game::Result::PlayerWin;
		}
		else
		{
			return Game::Result::ComputerWin;
		}
	}
	else if (isDraw())
	{
		return Game::Result::Tie;
	}
	
	return Game::Result::InProgress;
}

void TicTacToe::switchPlayer()
{
	if (currentPlayer == 'X')
		currentPlayer = 'O';
	else
		currentPlayer = 'X';
}

char TicTacToe::getCell(int row, int column) const
{
	return board[row][column];
}

char TicTacToe::getCurrentPlayer() const
{
	return currentPlayer;
}

bool TicTacToe::isValidMove(int row, int column) const
{
	return (row >= 0 && row < GRID_SIZE &&
		column >= 0 && column < GRID_SIZE &&
		board[row][column] == ' ');
}

string TicTacToe::choiceToString(int choice) const
{
	int row = choice / GRID_SIZE;
	int column = choice % GRID_SIZE;
	return "Cell ( " + to_string(row) + ", " + to_string(column) + ")";
}

bool TicTacToe::isWin() const
{
	for (int i = 0; i < GRID_SIZE; ++i)
	{
		// Check rows
		if (board[i][0] != ' ' &&
			board[i][0] == board[i][1] &&
			board[i][1] == board[i][2])
			return true;

		// Check columns
		if (board[0][i] != ' ' &&
			board[0][i] == board[1][i] &&
			board[1][i] == board[2][i])
			return true;
	}

	// Check diagonals
	if (board[0][0] != ' ' &&
		board[0][0] == board[1][1] &&
		board[1][1] == board[2][2])
		return true;

	if (board[0][2] != ' ' &&
		board[0][2] == board[1][1] &&
		board[1][1] == board[2][0])
		return true;

	return false;
}

bool TicTacToe::isDraw() const
{
	if (isWin())
		return false;
	for (int i = 0; i < GRID_SIZE; ++i)
	{
		for (int j = 0; j < GRID_SIZE; ++j)
		{
			if (board[i][j] == ' ')
				return false;
		}
	}
	return true;
}

void TicTacToe::resetBoard()
{
	for (int i = 0; i < GRID_SIZE; ++i)
	{
		for (int j = 0; j < GRID_SIZE; ++j)
		{
			board[i][j] = ' ';
		}
	}
}
