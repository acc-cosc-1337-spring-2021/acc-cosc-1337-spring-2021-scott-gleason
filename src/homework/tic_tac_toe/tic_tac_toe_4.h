#ifndef GAME_4
#define GAME_4

#include "tic_tac_toe.h"

class TicTacToe4: public TicTacToe 
{   
    public:
        TicTacToe4() : TicTacToe(4){}
        TicTacToe4(vector<string> p, string winner) : TicTacToe(p, winner){}


    private:
        bool check_column_win() override;
        bool check_row_win() override;
        bool check_diagonal_win() override;

};

#endif // GAME_4