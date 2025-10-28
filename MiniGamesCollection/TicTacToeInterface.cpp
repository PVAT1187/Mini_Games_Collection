#include "TicTacToeInterface.h"

using namespace std;

void TicTacToeInterface::displayGameTitle() const
{
	cout << "\n==============================\n";
	cout << "         Tic Tac Toe\n";
	cout << "==============================\n";
	cout << "\nWelcome to the game!\n";
	cout << endl;
	system("pause");
}

void TicTacToeInterface::displayBoard(const TicTacToe& tictactoe)
{
	cout << "\n\t  1   2   3" << endl;
	for (int i = 0; i < GRID_SIZE; ++i)
	{
		cout << "\t" << i + 1 << " ";
		for (int j = 0; j < GRID_SIZE; ++j)
		{
			cout << tictactoe.getCell(i, j);
			if (j < GRID_SIZE - 1)
				cout << " | ";
		}
		cout << endl;
		if (i < GRID_SIZE - 1)
			cout << "\t  --+---+--" << endl;
	}
}

void TicTacToeInterface::promptForPlayerChoice
	(const Game& game, int& row, int& column) const
{
	const TicTacToe& tictactoe = static_cast<const TicTacToe&>(game);

	while (true)
	{
		cout << "\n------ Player " << tictactoe.getCurrentPlayer()
			<< "'s turn ------";
		cout << "\nChoose your move (row, column):\n";
		cout << "\n> ";
		cin >> row >> column;

		if (row < 1 || row > 3 || column < 1 || column > 3)
		{
			GameInterface::displayInvalidChoiceMessage();
		}
		else
		{
			row--;
			column--;
			break;
		}
	}
}