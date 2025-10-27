#ifndef GAME_H
#define GAME_H

#include <string>
#include <ctime>
#include <cstdlib>

class Game
{
	public:
		enum class Result { Tie, PlayerWin, ComputerWin, InProgress };

		Game() { srand(static_cast<unsigned int>(time(nullptr))); }

		virtual void run() = 0;

		virtual void getComputerChoice() = 0;

		virtual Result determineWinner() const = 0;

		virtual std::string choiceToString(int choice) const = 0;

		virtual ~Game() = default;	
};

#endif // !GAME_H
