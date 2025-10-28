#include "GameMenu.h"
#include "TicTacToe.h"
#include "RockPaperScissors.h"

#include <iostream>

using namespace std;

void displayGameMenu()
{
	int choice = 0;
	while (choice != 3)
	{
		cout << "=====================================\n";
		cout << "Welcome to the Mini Games Collection!" << endl;
		cout << "=====================================\n";

		cout << "\nPlease select a game: " << endl;
		cout << "1. Tic Tac Toe" << endl;
		cout << "2. Rock Paper Scissors" << endl;
		cout << "3. Exit" << endl;
		
		cout << "\nEnter your choice: ";
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
				cout << "\nThank you for playing!\n";
				break;
			default:
			{
				cout << "\nInvalid choice. Please select a valid game.\n";
				cout << endl;
				break;
			}
		}
	}
}