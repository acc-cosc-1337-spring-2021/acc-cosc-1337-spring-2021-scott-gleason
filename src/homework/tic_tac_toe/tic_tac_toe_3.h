#ifndef GAME_3
#define GAME_3

#include "tic_tac_toe.h"

class TicTacToe3: public TicTacToe 
{   
    public:
        TicTacToe3() : TicTacToe(3){}


    private:
        bool check_column_win() override;
        bool check_row_win() override;
        bool check_diagonal_win() override;

};

#endif // GAME_3