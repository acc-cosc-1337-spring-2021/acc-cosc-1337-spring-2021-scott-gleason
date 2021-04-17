#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

int main() 
{
	bool answer_valid = false;
	string first_player;
	string play_again = "Y";
	string game_winner;
	int x = 0;
	int o = 0;
	int t = 0;

	TicTacToeManager manager; // create instance of TicTacToeManager class.
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

			cin >> tic_tac_toe;

			if (tic_tac_toe.game_over() == true) //Test if game is over. If yes then display winner or tie.
			{
				game_winner = tic_tac_toe.get_winner();
				if (game_winner == "X" || game_winner == "O")
				{
					cout << tic_tac_toe;
					cout << "Congratulations! " << game_winner << " is the winner of the game\n";
					manager.save_game(tic_tac_toe);
					manager.get_winner_total(x, o, t);
					cout << "\nX Wins: " << x << "\n";
					cout << "O Wins: " << o << "\n";
					cout << "Ties: " << t << "\n\n";
										
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
					cout << tic_tac_toe;
					cout << "X and O have tied! Better luck next time.\n";
					manager.save_game(tic_tac_toe);
					manager.get_winner_total(x, o, t);
					cout << "\nX Wins: " << x << "\n";
					cout << "O Wins: " << o << "\n";
					cout << "Ties: " << t << "\n\n";

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
				cout << tic_tac_toe;
			}

		} while (tic_tac_toe.game_over() == false);

	 } while (play_again == "Y" || play_again == "y"); //loop continues until player selects N or n.

	cout << manager;
	 
	return 0;
}