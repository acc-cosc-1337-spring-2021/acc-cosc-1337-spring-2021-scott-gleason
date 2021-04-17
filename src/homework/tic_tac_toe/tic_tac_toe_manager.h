#ifndef MANAGER
#define MANAGER

#include "tic_tac_toe.h"

class TicTacToeManager 

{
    friend std::ostream& operator<<(std::ostream& output, const TicTacToeManager& manager);

    public:
        TicTacToeManager() = default;
        void save_game(TicTacToe b);
        void get_winner_total(int& x, int& o, int& t);

    private:
        vector<TicTacToe> games;
        int x_wins = 0;
        int o_wins = 0;
        int ties = 0;
        void update_winner_count(string winner);

};

#endif // MANAGER