#include "tic_tac_toe.h"

void TicTacToe::display_board()const 
{
    cout << "   |   |   \n";
    cout << " " << TicTacToe::pegs[0] << " | " << TicTacToe::pegs[1] << " | " << TicTacToe::pegs[2] << "\n";
    cout << "___|___|___\n";
    cout << "   |   |   \n";
    cout << " " << TicTacToe::pegs[3] << " | " << TicTacToe::pegs[4] << " | " << TicTacToe::pegs[5] << "\n";
    cout << "___|___|___\n";
    cout << "   |   |   \n";
    cout << " " << TicTacToe::pegs[6] << " | " << TicTacToe::pegs[7] << " | " << TicTacToe::pegs[8] << "\n";
    cout << "   |   |   \n";
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
    if (TicTacToe::check_column_win() == true)
    {
        TicTacToe::set_winner();
        return true;
    }
    else if (TicTacToe::check_row_win() == true) 
    {
        TicTacToe::set_winner();
        return true;
    }
    else if (TicTacToe::check_diagonal_win() == true) 
    {
        TicTacToe::set_winner();
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
    if (TicTacToe::pegs[0] == "X" && TicTacToe::pegs[3] == "X" && TicTacToe::pegs[6] == "X") 
    {
        return true;
    }
    else if (TicTacToe::pegs[0] == "O" && TicTacToe::pegs[3] == "O" && TicTacToe::pegs[6] == "O") 
    {
        return true;
    }
    else if (TicTacToe::pegs[1] == "X" && TicTacToe::pegs[4] == "X" && TicTacToe::pegs[7] == "X") 
    {
        return true;
    }
    else if (TicTacToe::pegs[1] == "O" && TicTacToe::pegs[4] == "O" && TicTacToe::pegs[7] == "O") 
    {
        return true;
    }
    else if (TicTacToe::pegs[2] == "X" && TicTacToe::pegs[5] == "X" && TicTacToe::pegs[8] == "X") 
    {
        return true;
    }
    else if (TicTacToe::pegs[2] == "O" && TicTacToe::pegs[5] == "O" && TicTacToe::pegs[8] == "O") 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool TicTacToe::check_row_win() 
{
    if (TicTacToe::pegs[0] == "X" && TicTacToe::pegs[1] == "X" && TicTacToe::pegs[2] == "X") 
    {
        return true;
    }
    else if (TicTacToe::pegs[0] == "O" && TicTacToe::pegs[1] == "O" && TicTacToe::pegs[2] == "O") 
    {
        return true;
    }
    else if (TicTacToe::pegs[3] == "X" && TicTacToe::pegs[4] == "X" && TicTacToe::pegs[5] == "X") 
    {
        return true;
    }
    else if (TicTacToe::pegs[3] == "O" && TicTacToe::pegs[4] == "O" && TicTacToe::pegs[5] == "O") 
    {
        return true;
    }
    else if (TicTacToe::pegs[6] == "X" && TicTacToe::pegs[7] == "X" && TicTacToe::pegs[8] == "X") 
    {
        return true;
    }
    else if (TicTacToe::pegs[6] == "O" && TicTacToe::pegs[7] == "O" && TicTacToe::pegs[8] == "O") 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool TicTacToe::check_diagonal_win() 
{
    if (TicTacToe::pegs[0] == "X" && TicTacToe::pegs[4] == "X" && TicTacToe::pegs[8] == "X") 
    {
        return true;
    }
    else if (TicTacToe::pegs[0] == "O" && TicTacToe::pegs[4] == "O" && TicTacToe::pegs[8] == "O") 
    {
        return true;
    }
    else if (TicTacToe::pegs[6] == "X" && TicTacToe::pegs[4] == "X" && TicTacToe::pegs[2] == "X") 
    {
        return true;
    }
    else if (TicTacToe::pegs[6] == "O" && TicTacToe::pegs[4] == "O" && TicTacToe::pegs[2] == "O") 
    {
        return true;
    }
    else 
    {
        return false;
    }
}


