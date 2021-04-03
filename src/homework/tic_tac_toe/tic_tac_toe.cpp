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
    string answer;
    bool answer_valid = false;

    do {
        cout << "Would you like to be X or O? ";
        cin >> answer;

        if (answer == "X" || answer == "O") {
            answer_valid = true;
        }
        else 
        {
            cout << "Invalid entry!\n";
            answer_valid = false;
        }
    } while (answer_valid == false);
    
    

    return answer;
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
    return TicTacToe::check_board_full();
}


