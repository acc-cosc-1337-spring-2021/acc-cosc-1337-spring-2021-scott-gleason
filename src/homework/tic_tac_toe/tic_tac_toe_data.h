#ifndef DATA_H
#define DATA_H
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<vector>
#include<memory>
#include<fstream>
using std::unique_ptr;
using std::make_unique;


class TicTacToeData
{
    public:
        void save_games(const vector<unique_ptr<TicTacToe>>& games);
        std::vector<std::unique_ptr<TicTacToe>> get_games();
    private:
        const string file_name{"tictactoe.dat"};
};

#endif // DATA_H
