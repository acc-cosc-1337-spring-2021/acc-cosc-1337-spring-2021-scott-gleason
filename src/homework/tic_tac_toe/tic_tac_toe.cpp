#include "tic_tac_toe.h"

std::ostream& operator<<(std::ostream& output, const TicTacToe& tic_tac_toe) 
{
    if (tic_tac_toe.pegs.size() == 9) 
    {
        output << "   |   |   \n";
        output << " " << tic_tac_toe.pegs[0] << " | " << tic_tac_toe.pegs[1] << " | " << tic_tac_toe.pegs[2] << "\n";
        output << "___|___|___\n";
        output << "   |   |   \n";
        output << " " << tic_tac_toe.pegs[3] << " | " << tic_tac_toe.pegs[4] << " | " << tic_tac_toe.pegs[5] << "\n";
        output << "___|___|___\n";
        output << "   |   |   \n";
        output << " " << tic_tac_toe.pegs[6] << " | " << tic_tac_toe.pegs[7] << " | " << tic_tac_toe.pegs[8] << "\n";
        output << "   |   |   \n";
    }
    else if (tic_tac_toe.pegs.size() == 16) 
    {
        output << "   |   |   |   \n";
        output << " " << tic_tac_toe.pegs[0] << " | " << tic_tac_toe.pegs[1] << " | " << tic_tac_toe.pegs[2] << " | " << tic_tac_toe.pegs[3] << "\n";
        output << "___|___|___|___\n";
        output << "   |   |   |   \n";
        output << " " << tic_tac_toe.pegs[4] << " | " << tic_tac_toe.pegs[5] << " | " << tic_tac_toe.pegs[6] << " | " << tic_tac_toe.pegs[7] << "\n";
        output << "___|___|___|___\n";
        output << "   |   |   |   \n";
        output << " " << tic_tac_toe.pegs[8] << " | " << tic_tac_toe.pegs[9] << " | " << tic_tac_toe.pegs[10] << " | " << tic_tac_toe.pegs[11] << "\n";
        output << "___|___|___|___\n";
        output << "   |   |   |   \n";
        output << " " << tic_tac_toe.pegs[12] << " | " << tic_tac_toe.pegs[13] << " | " << tic_tac_toe.pegs[14] << " | " << tic_tac_toe.pegs[15] << "\n";
        output << "   |   |   |   \n";
    }

    return output;
}

std::istream& operator>>(std::istream& input, TicTacToe& tic_tac_toe) 
{
    int position = 0;
    bool answer_valid;

    do { //Select next position for next peg. Loop winn continue until valid response is entered.

        if (tic_tac_toe.pegs.size() == 9) 
        {
            cout << "Player " << tic_tac_toe.get_player() << ": Please select where to place your peg (1-9): ";
				input >> position;

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
        }
        else if (tic_tac_toe.pegs.size() == 16) 
        {
            cout << "Player " << tic_tac_toe.get_player() << ": Please select where to place your peg (1-16): ";
				input >> position;

				if (position < 1 || position > 16) {
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
        }
  
				
	} while (answer_valid == false);
		
	tic_tac_toe.mark_board(position);

    return input;
}

string TicTacToe::get_player()const 
{
     return TicTacToe::player;
}

void TicTacToe::clear_board() 
{
    for (int i=0; i < 9; i++) 
    {
        TicTacToe::pegs[i] = " ";
    }
}

void TicTacToe::set_next_player() 
{
    if (TicTacToe::player == "X") 
    {
        TicTacToe::player = "O";
    }
    else 
    {
        TicTacToe::player = "X";
    }
}

void TicTacToe::start_game(string first_player) 
{
    TicTacToe::player = first_player;
    TicTacToe::clear_board();

}

void TicTacToe::mark_board(int position) 
{
    position -= 1;
    TicTacToe::pegs[position] = TicTacToe::player;
    TicTacToe::set_next_player();
}

bool TicTacToe::check_board_full() 
{
    if (std::find(TicTacToe::pegs.begin(), TicTacToe::pegs.end(), " ") != TicTacToe::pegs.end()) 
    {
        return false;
    }
    else 
    {
        return true;
    }
}

bool TicTacToe::game_over() 
{
    if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_row_win() == true) 
    {
        set_winner();
        return true;
    }
    else if (check_diagonal_win() == true) 
    {
        set_winner();
        return true;
    }
    else if (TicTacToe::check_board_full() == true) 
    {
        TicTacToe::winner = "C";
        return true;
    }
    else 
    {
        return false;
    }
    
}

void TicTacToe::set_winner() 
{
    if (TicTacToe::player == "X") 
    {
        TicTacToe::winner = "O";
    }
    else 
    {
        TicTacToe::winner = "X";
    }
}

string TicTacToe::get_winner() 
{
    return TicTacToe::winner;
}

bool TicTacToe::peg_empty(int position) 
{
    position -= 1;
    if (TicTacToe::pegs[position] == " ") 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool TicTacToe::check_column_win() 
{
    return false;
}

bool TicTacToe::check_row_win() 
{

    return false;   
 
}

bool TicTacToe::check_diagonal_win() 
{

   return false;
   
}


