#include "Game.h"
#include "TicTacToe.h"
#include "RockPaperScissors.h"


#include <iostream>

using namespace std;

int main()
{
	int choice = 0;
	cout << "Welcome to the Mini Games Collection!" << endl;
	cout << "Please select a game: " << endl;
	cout << "1. Tic Tac Toe" << endl;
	cout << "2. Rock Paper Scissors" << endl;

	while (choice != 3)
	{
		cout << "Enter your choice (1-2) or 3 to exit: ";
		cin >> choice;
		switch (choice)
		{
			case 1:
			{
				TicTacToe tictactoe;
				tictactoe.run();
				break;
			}
			case 2:
			{
				RockPaperScissors rockpaperscissors;
				rockpaperscissors.run();
				break;
			}
			case 3:
			{
				cout << "Thank you for playing!" << endl;
				break;
			}
			default:
				cout << "Invalid choice. Please select a valid game." << endl;
				break;
		}
	}
	return 0;
}