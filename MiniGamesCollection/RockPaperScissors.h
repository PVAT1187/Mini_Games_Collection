#ifndef ROCKPAPERSCISSORS_H
#define ROCKPAPERSCISSORS_H

#include "Game.h"

enum class Choices { Rock, Paper, Scissors, Count };

class RockPaperScissors : public Game
{
	public:
		RockPaperScissors();

		void run() override;

		void getPlayerChoice(int choice);
		void getComputerChoice() override;

		Game::Result determineWinner() const override;

		std::string choiceToString(int choice) const override;

	private:
		Choices playerChoice;
		Choices computerChoice;
};

#endif // !ROCKPAPERSCISSORS_H

