#include "RockPaperScissorsInterface.h"

using namespace std;

void RockPaperScissorsInterface::displayGameTitle() const
{
	cout << "\n==============================\n";
	cout << "     Rock Paper Scissors\n";
	cout << "==============================\n";
	cout << "\nWelcome to the game!\n";
	cout << endl;
	system("pause");
}

void RockPaperScissorsInterface::displayChoices(const Game& game,
    int playerChoice, int computerChoice) const
{
    string playerChoiceStr = game.choiceToString(playerChoice);
    string computerChoiceStr = game.choiceToString(computerChoice);

    cout << "\nYou chose: " << playerChoiceStr << endl;
    cout << "Computer chose: " << computerChoiceStr << endl;
    cout << playerChoiceStr << " vs " << computerChoiceStr << endl;
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