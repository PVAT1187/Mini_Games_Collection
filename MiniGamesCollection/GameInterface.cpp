#include "GameInterface.h"

#include "limits"

using namespace std;

void GameInterface::displayWinner(Game::Result result) const
{
	cout << "\nThe result is: ";
	switch (result)
	{
		case Game::Result::Tie:
			cout << "It's a tie!\n";
			break;
		case Game::Result::PlayerWin:
			cout << "You win!\n";
			break;
		case Game::Result::ComputerWin:
			cout << "Computer wins!\n";
			break;
		default:
			break;
	}
}

void GameInterface::displayInvalidChoiceMessage() const
{
	cout << "\nInvalid Choice. Please try again.\n";
}

void GameInterface::displayThanksForPlaying()
{
	std::cout << "\nThanks for playing!" << endl;
	std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
	std::cin.get();
}

bool GameInterface::promptForPlayAgain() const
{
	std::string playAgain;
	while (true)
	{
		std::cout << "\nPlay again? (y/n): ";
		std::cin >> playAgain;

		if (playAgain == "y" || playAgain == "Y")
			return true;
		if (playAgain == "n" || playAgain == "N")
			return false;

		cout << "Invalid input. Please try again!";
	}
}