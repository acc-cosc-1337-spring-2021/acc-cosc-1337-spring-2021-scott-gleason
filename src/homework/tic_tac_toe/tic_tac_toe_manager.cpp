#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<memory>
#include<vector>
using std::unique_ptr;

void TicTacToeManager::update_winner_count(string winner) 
{
    if (winner == "X") 
    {
        TicTacToeManager::x_wins += 1;
    }
    else if (winner == "O") 
    {
        TicTacToeManager::o_wins += 1;
    }
    else if (winner == "C") 
    {
        TicTacToeManager::ties += 1;
    }
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t) 
{
    x = x_wins;
    o = o_wins;
    t = ties;
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    string winner = b -> get_winner();

    games.push_back(std::move(b)); // unable to get push back to work.
    update_winner_count(winner);
    
}

std::ostream& operator<<(std::ostream& output, const TicTacToeManager& manager) 
{
    for(auto game: manager.games) 
    {
        output << "\n" << game << "\n";
    }

    output << "O Wins: " << manager.o_wins << "\n";
    output << "X wins: " << manager.x_wins << "\n";
    output << "Ties: " << manager.ties << "\n";

    return output;
}