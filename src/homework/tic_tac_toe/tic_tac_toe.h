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
    public:
        string get_winner();
        TicTacToe() = default;
        void display_board()const;
        string get_player()const;
        void start_game(string first_player);
        void mark_board(int position);
        bool game_over();   
        bool peg_empty(int position);  
      
        
    private:
        string player;
        string winner;
        vector<string> pegs{9, " "};
        void clear_board();
        void set_next_player();
        bool check_board_full();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();
};