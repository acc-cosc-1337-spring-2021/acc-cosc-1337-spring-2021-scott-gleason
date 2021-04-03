#include "tic_tac_toe.h"

int main() 
{
	int position = 0;

	TicTacToe tic_tac_toe; // create instance of TicTacToe class

	string first_player = tic_tac_toe.get_player(); 

	tic_tac_toe.start_game(first_player);

	do {
		cout << "\nPlease select where to place your peg (1-9): ";
		cin >> position;
		tic_tac_toe.mark_board(position);
		tic_tac_toe.display_board();
	}
	while (tic_tac_toe.game_over() == false);

	cout << "Game Over!!!";

	return 0;
}