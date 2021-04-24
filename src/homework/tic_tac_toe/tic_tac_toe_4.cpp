#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/

bool TicTacToe4::check_row_win() 
{
    if (TicTacToe4::pegs[0] == "X" && TicTacToe4::pegs[1] == "X" && TicTacToe4::pegs[2] == "X" && TicTacToe4::pegs[3] == "X") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[0] == "O" && TicTacToe4::pegs[1] == "O" && TicTacToe4::pegs[2] == "O" && TicTacToe4::pegs[3] == "O") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[4] == "X" && TicTacToe4::pegs[5] == "X" && TicTacToe4::pegs[6] == "X" && TicTacToe4::pegs[7] == "X") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[4] == "O" && TicTacToe4::pegs[5] == "O" && TicTacToe4::pegs[6] == "O" && TicTacToe4::pegs[7] == "O") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[8] == "X" && TicTacToe4::pegs[9] == "X" && TicTacToe4::pegs[10] == "X" && TicTacToe4::pegs[11] == "X") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[8] == "O" && TicTacToe4::pegs[9] == "O" && TicTacToe4::pegs[10] == "O" && TicTacToe4::pegs[11] == "O") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[12] == "X" && TicTacToe4::pegs[13] == "X" && TicTacToe4::pegs[14] == "X" && TicTacToe4::pegs[15] == "X") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[12] == "O" && TicTacToe4::pegs[13] == "O" && TicTacToe4::pegs[14] == "O" && TicTacToe4::pegs[15] == "O") 
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
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/

bool TicTacToe4::check_column_win() 
{
    if (TicTacToe4::pegs[0] == "X" && TicTacToe4::pegs[4] == "X" && TicTacToe4::pegs[8] == "X" && TicTacToe4::pegs[12] == "X") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[0] == "O" && TicTacToe4::pegs[4] == "O" && TicTacToe4::pegs[8] == "O" && TicTacToe4::pegs[12] == "O") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[1] == "X" && TicTacToe4::pegs[5] == "X" && TicTacToe4::pegs[9] == "X" && TicTacToe4::pegs[13] == "X") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[1] == "O" && TicTacToe4::pegs[5] == "O" && TicTacToe4::pegs[9] == "O" && TicTacToe4::pegs[13] == "O") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[2] == "X" && TicTacToe4::pegs[6] == "X" && TicTacToe4::pegs[10] == "X" && TicTacToe4::pegs[14] == "X") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[2] == "O" && TicTacToe4::pegs[6] == "O" && TicTacToe4::pegs[10] == "O" && TicTacToe4::pegs[14] == "O") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[3] == "X" && TicTacToe4::pegs[7] == "X" && TicTacToe4::pegs[11] == "X" && TicTacToe4::pegs[15] == "X") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[3] == "O" && TicTacToe4::pegs[7] == "O" && TicTacToe4::pegs[11] == "O" && TicTacToe4::pegs[15] == "O") 
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
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/

bool TicTacToe4::check_diagonal_win() 
{
    if (TicTacToe4::pegs[0] == "X" && TicTacToe4::pegs[5] == "X" && TicTacToe4::pegs[10] == "X" && TicTacToe4::pegs[15] == "X") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[0] == "O" && TicTacToe4::pegs[5] == "O" && TicTacToe4::pegs[10] == "O" && TicTacToe4::pegs[15] == "O") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[3] == "X" && TicTacToe4::pegs[6] == "X" && TicTacToe4::pegs[9] == "X" && TicTacToe4::pegs[12] == "X") 
    {
        return true;
    }
    else if (TicTacToe4::pegs[3] == "O" && TicTacToe4::pegs[6] == "O" && TicTacToe4::pegs[9] == "O" && TicTacToe4::pegs[12] == "O") 
    {
        return true;
    }
    else 
    {
        return false;
    }
}
