#ifndef GAME
#define GAME

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::string;
using std::vector;
using std::cin;
using std::cout;

class TicTacToe 
{
    friend std::ostream& operator<<(std::ostream& output, const TicTacToe& tic_tac_toe);
    friend std::istream& operator>>(std::istream& input, TicTacToe& tic_tac_toe);

    protected:
        vector<string> pegs;
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();

    public:
        TicTacToe(int s): pegs(s*s, " "){}
        string get_winner();
        //TicTacToe() = default;
        string get_player()const;
        void start_game(string first_player);
        void mark_board(int position);
        bool game_over();   
        bool peg_empty(int position);  
      
        
    private:
        string player;
        string winner;
        //vector<string> pegs{9, " "};
        void clear_board();
        void set_next_player();
        bool check_board_full();
        //bool check_column_win();
        //bool check_row_win();
        //bool check_diagonal_win();
        void set_winner();
};

#endif // GAME