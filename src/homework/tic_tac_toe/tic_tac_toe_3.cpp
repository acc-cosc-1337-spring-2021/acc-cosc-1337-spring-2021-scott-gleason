#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

bool TicTacToe3::check_column_win() 
{
    if (TicTacToe3::pegs[0] == "X" && TicTacToe3::pegs[3] == "X" && TicTacToe3::pegs[6] == "X") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[0] == "O" && TicTacToe3::pegs[3] == "O" && TicTacToe3::pegs[6] == "O") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[1] == "X" && TicTacToe3::pegs[4] == "X" && TicTacToe3::pegs[7] == "X") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[1] == "O" && TicTacToe3::pegs[4] == "O" && TicTacToe3::pegs[7] == "O") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[2] == "X" && TicTacToe3::pegs[5] == "X" && TicTacToe3::pegs[8] == "X") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[2] == "O" && TicTacToe3::pegs[5] == "O" && TicTacToe3::pegs[8] == "O") 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/

bool TicTacToe3::check_row_win() 
{
    if (TicTacToe3::pegs[0] == "X" && TicTacToe3::pegs[1] == "X" && TicTacToe3::pegs[2] == "X") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[0] == "O" && TicTacToe3::pegs[1] == "O" && TicTacToe3::pegs[2] == "O") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[3] == "X" && TicTacToe3::pegs[4] == "X" && TicTacToe3::pegs[5] == "X") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[3] == "O" && TicTacToe3::pegs[4] == "O" && TicTacToe3::pegs[5] == "O") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[6] == "X" && TicTacToe3::pegs[7] == "X" && TicTacToe3::pegs[8] == "X") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[6] == "O" && TicTacToe3::pegs[7] == "O" && TicTacToe3::pegs[8] == "O") 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/

bool TicTacToe3::check_diagonal_win() 
{
    if (TicTacToe3::pegs[0] == "X" && TicTacToe3::pegs[4] == "X" && TicTacToe3::pegs[8] == "X") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[0] == "O" && TicTacToe3::pegs[4] == "O" && TicTacToe3::pegs[8] == "O") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[6] == "X" && TicTacToe3::pegs[4] == "X" && TicTacToe3::pegs[2] == "X") 
    {
        return true;
    }
    else if (TicTacToe3::pegs[6] == "O" && TicTacToe3::pegs[4] == "O" && TicTacToe3::pegs[2] == "O") 
    {
        return true;
    }
    else 
    {
        return false;
    }
}
