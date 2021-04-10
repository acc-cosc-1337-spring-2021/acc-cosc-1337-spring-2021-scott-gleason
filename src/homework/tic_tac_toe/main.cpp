#include "tic_tac_toe.h"

int main() 
{
	int position = 0;
	bool answer_valid = false;
	string first_player;
	string play_again = "Y";
	string game_winner;

	TicTacToe tic_tac_toe; // create instance of TicTacToe class

	do 
	{

		do { //Select either X or O for first player. loop will continue until valid response is entered.
        	cout << "Would you like to be X or O? ";
        	cin >> first_player;

        	if (first_player == "X" || first_player == "O") {
            	answer_valid = true;
        	}
        	else 
        	{
            	cout << "Invalid entry! Please try again.\n";
            	answer_valid = false;
        	}
    	} while (answer_valid == false);

		//Start game of Tic Tac Toe
		tic_tac_toe.start_game(first_player);

		do 
		{

			do { //Select next position for next peg. Loop winn continue until valid response is entered.
				cout << "Player " << tic_tac_toe.get_player() << ": Please select where to place your peg (1-9): ";
				cin >> position;

				if (position < 1 || position > 9) {
					cout << "Invalid entry! Please try again.\n";
					answer_valid = false;
				}
				else 
				{
					if (tic_tac_toe.peg_empty(position) == false) {
						cout << "Peg " << position << " has already been selected. Please try again.\n";
						answer_valid = false;
					} 
					else 
					{
						answer_valid = true;
					}			
				}
			} while (answer_valid == false);
		
			tic_tac_toe.mark_board(position);

			if (tic_tac_toe.game_over() == true) //Test if game is over. If yes then display winner or tie.
			{
				game_winner = tic_tac_toe.get_winner();
				if (game_winner == "X" || game_winner == "O")
				{
					tic_tac_toe.display_board();
					cout << "Congratulations! " << game_winner << " is the winner of the game\n";
					
					do 
					{
						cout << "Would you like to play again? Y or N: ";
						cin >> play_again;
						if (play_again == "Y" || play_again == "N") 
						{
							answer_valid = true;
						}
						else 
						{
							cout << "Invalid Entry! Please try agian!\n";
							answer_valid = false;
						}
					} while (answer_valid == false);
				}

				if (game_winner == "C") 
				{
					tic_tac_toe.display_board();
					cout << "X and O have tied! Better luck next time.\n";

					do 
					{
						cout << "Would you like to play again? Y or N: ";
						cin >> play_again;
						if (play_again == "Y" || play_again == "N") 
						{
							answer_valid = true;
						}
						else 
						{
							cout << "Invalid Entry! Please try agian!\n";
							answer_valid = false;
						}
					} while (answer_valid == false);
				}
			}
			else //If there is no winner continue with game.
			{
				tic_tac_toe.display_board();
			}

		} while (tic_tac_toe.game_over() == false);

	 } while (play_again == "Y" || play_again == "y"); //loop continues until player selects N or n.

	 
	return 0;
}