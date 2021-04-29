#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<memory>

using std::unique_ptr; using std::make_unique;

int main() 
{
	bool answer_valid = false;
	string first_player;
	string play_again;
	bool continue_game;
	string game_winner;
	int board_choice;
	bool game_ended;
	int x = 0;
	int o = 0;
	int t = 0;

	TicTacToeManager manager; // create instance of TicTacToeManager class.
	unique_ptr<TicTacToe> tic_tac_toe; 
	
	do 
	{
		

		do {
			cout << "Would you like to play 3x3 or 4x4? Enter 3 or 4: ";
			cin >> board_choice;
			
			if (board_choice == 3 || board_choice == 4) // Validate choice for board size.
			{
				answer_valid = true;
		
				if (board_choice == 3) 
				{
					tic_tac_toe = make_unique<TicTacToe3>(); // Create instace of 3x3 Tic Tac Toe.
				}
				else 
				{
					tic_tac_toe = make_unique<TicTacToe4>(); // Create instance of 4x4 of Tic Tac Toe.
				}
			}
			else 
				{
					cout << "Invalid entry! Please try again.\n";
					answer_valid = false;
				}
		} while (answer_valid == false);

		do //Select either X or O for first player. loop will continue until valid response is entered.
		{ 
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
		tic_tac_toe -> start_game(first_player);

		do 
		{

			cin >> *tic_tac_toe;

			if (tic_tac_toe -> game_over() == true) // Test if the game is over.
			{
				
				game_winner = tic_tac_toe -> get_winner();
				if (game_winner == "X" || game_winner == "O") 
				{
					cout << *tic_tac_toe;
					cout << "Congratulations! " << game_winner << " is the winner of the game\n";
					manager.save_game(tic_tac_toe);
					manager.get_winner_total(x, o, t);
					cout << "\nX Wins: " << x << "\n";
					cout << "O Wins " << o << "\n";
					cout << "Ties: " << t << "\n";
					game_ended = true;
				}
				else if (game_winner == "C") 
				{
					cout << *tic_tac_toe;
					cout << "X and O have tied! Better luch next time.\n";
					manager.save_game(tic_tac_toe);
					manager.get_winner_total(x, o, t);
					cout << "\nX Wins: " << x << "\n";
					cout << "O Wins: " << o << "\n";
					cout << "Ties: " << t << "\n";
					game_ended = true;
				}
			}
			else 
			{
				cout << *tic_tac_toe;
				game_ended = false;
			}

		} while (game_ended == false);
		
		do 
		{
			cout << "Would you like to play again? Y or N: ";
			cin >> play_again;
			if (play_again == "Y" || play_again == "N") 
			{
				answer_valid = true;
				if (play_again == "Y") 
				{
					continue_game = true;
				}
				else 
				{
					continue_game = false;
				}
			}
			else 
			{
				cout << "Invalid Entry! Please try agian!\n";
				answer_valid = false;
			}
		} while (answer_valid == false);

	} while (continue_game == true);

	cout << "Game is over\n";
	cout << manager;
	 
	return 0;
}