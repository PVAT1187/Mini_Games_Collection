#ifndef ROCKPAPERSCISSORS_INTERFACE_H
#define ROCKPAPERSCISSORS_INTERFACE_H

#include "GameInterface.h"
#include "RockPaperScissors.h"

class RockPaperScissorsInterface : public GameInterface
{
	public:
		void displayGameTitle() const override;
		
		int promptForPlayerChoice() const;
		void displayChoices(const Game& game,
			int playerChoice, int computerChoice) const;

		virtual ~RockPaperScissorsInterface() = default;
};

#endif // !ROCKPAPERSCISSORS_INTERFACE_H

