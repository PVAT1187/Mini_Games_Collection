#ifndef GAME_INTERFACE_H
#define GAME_INTERFACE_H

#include "Game.h"

#include <iostream>

class GameInterface
{
	public:
		virtual void displayGameTitle() const = 0;
		void displayWinner(Game::Result result) const;
		void displayChoices(const Game& game, 
			int playerChoice, int computerChoice);
		void displayInvalidChoiceMessage() const;
		
		void displayThanksForPlaying();

		bool promptForPlayAgain() const;

		virtual ~GameInterface() = default;
};

#endif // GAME_INTERFACE_H
