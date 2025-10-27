#include "RockPaperScissorsInterface.h"

using namespace std;

void RockPaperScissorsInterface::displayGameTitle() const
{
	cout << "==============================\n";
	cout << "     Rock Paper Scissors\n";
	cout << "==============================\n";
	cout << "\nWelcome to the game!\n";
	cout << endl;
	system("pause");
}

int RockPaperScissorsInterface::promptForPlayerChoice() const
{
    int choice = -1;
    while (true)
    {
        cout << "\nChoose your move:\n";
        cout << "0: Rock\n1: Paper\n2: Scissor\n";
        cout << "\n> ";
        cin >> choice;

        if (choice < 0 || 
            choice >= static_cast<int>(Choices::Count))
        {
            GameInterface::displayInvalidChoiceMessage();
        }
        else
        {
            return choice;
        }
    }
}