#ifndef TICTACTOE_INTERFACE_H
#define TICTACTOE_INTERFACE_H

#include "GameInterface.h"
#include "TicTacToe.h"

class TicTacToeInterface : public GameInterface
{
	public:
		void displayGameTitle() const override;
		void displayBoard(const TicTacToe& tictactoe);

		void promptForPlayerChoice(const Game& game,
			int& row, int& column) const;

		virtual ~TicTacToeInterface() = default;
};

#endif // !TICTACTOE_INTERFACE_H

