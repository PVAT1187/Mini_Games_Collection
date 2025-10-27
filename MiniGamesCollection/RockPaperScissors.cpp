#include "RockPaperScissors.h"
#include "RockPaperScissorsInterface.h"

using namespace std;

RockPaperScissors::RockPaperScissors()
	: playerChoice(Choices::Rock), computerChoice(Choices::Rock) {}

void RockPaperScissors::run()
{
	RockPaperScissorsInterface rpsInterface;

	rpsInterface.displayGameTitle();

	do
	{
		getPlayerChoice(rpsInterface.promptForPlayerChoice());
		getComputerChoice();

		rpsInterface.displayChoices(*this, 
			static_cast<int>(playerChoice),
			static_cast<int>(computerChoice));

		rpsInterface.displayWinner(determineWinner());

	} while (rpsInterface.promptForPlayAgain());

	rpsInterface.displayThanksForPlaying();
}

void RockPaperScissors::getPlayerChoice(int choice)
{
	playerChoice = static_cast<Choices>(choice);
}

void RockPaperScissors::getComputerChoice()
{
	int randomIndex = rand() % static_cast<int>(Choices::Count);
	computerChoice = static_cast<Choices>(randomIndex);
}

Game::Result RockPaperScissors::determineWinner() const
{
	if (playerChoice == computerChoice)
	{
		return Result::Tie;
	}
	else if ((playerChoice == Choices::Rock && computerChoice == Choices::Scissors) ||
		(playerChoice == Choices::Paper && computerChoice == Choices::Rock) ||
		(playerChoice == Choices::Scissors && computerChoice == Choices::Paper))
	{
		return Result::PlayerWin;
	}
	else
	{
		return Result::ComputerWin;
	}
}

string RockPaperScissors::choiceToString(int choice) const
{
	switch (static_cast<Choices>(choice))
	{
		case Choices::Rock:
			return "Rock";
		case Choices::Paper:
			return "Paper";
		case Choices::Scissors:
			return "Scissors";
		default:
			return "Invalid choice. Please try again!";
	}
}