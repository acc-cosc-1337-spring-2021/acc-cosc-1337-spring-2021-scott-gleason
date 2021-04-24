#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<memory>
using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify if get player returns X") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("X");

	REQUIRE(tic_tac_toe -> get_player() == "X");
}

TEST_CASE("Verify if get player returns O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("O");

	REQUIRE(tic_tac_toe -> get_player() == "O");
}


TEST_CASE("Verify if check board full function works.") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("X");

	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe ->mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe-> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	tic_tac_toe -> game_over();
	REQUIRE(tic_tac_toe -> game_over() == true);
	REQUIRE(tic_tac_toe -> get_winner() == "C");
}

//Test cases for player X winning.

TEST_CASE("Verify win by first column.") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by second column.") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by third column.") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by first row.") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by second row.") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by third row.") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win diagonally from top left.") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win diagonally from bottom left.") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

//Test cases for player O winning

TEST_CASE("Verify win by first column - player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by second column - player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by third column - player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by first row - player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by second row - player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by third row - player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win diagonally from top left - player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win diagonally from bottom left - player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify get winner totalS") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe3>();
	TicTacToeManager manager;
	int x = 0;
	int o = 0;
	int t = 0;

	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == true);
	manager.save_game(tic_tac_toe);

	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == true);
	manager.save_game(tic_tac_toe);

	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	tic_tac_toe -> game_over();
	REQUIRE(tic_tac_toe -> game_over() == true);
	manager.save_game(tic_tac_toe);
	
	manager.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);
}

	//Test cases for Player X winning on 4x4 board.

	TEST_CASE("Verify if check board full function works. 4") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("X");

	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe-> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(12);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(14);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(13);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(15);
	REQUIRE(tic_tac_toe -> game_over() == true);
	REQUIRE(tic_tac_toe -> get_winner() == "C");
}

TEST_CASE("Verify win by first column. 4") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(13);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by second column. 4") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(14);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by third column. 4") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(15);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by forth column. 4") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(12);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by first row. 4") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by second row. 4") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by third row. 4") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(12);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by forth row. 4") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(13);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(14);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(15);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(12);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win diagonally from top left. 4") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(12);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win diagonally from bottom left. 4") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("X");
	tic_tac_toe -> mark_board(13);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

//Test cases for Player O winning on 4x4 board.

TEST_CASE("Verify if check board full function works. 4 - Player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("O");

	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe-> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(12);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(14);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(13);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(15);
	REQUIRE(tic_tac_toe -> game_over() == true);
	REQUIRE(tic_tac_toe -> get_winner() == "C");
}

TEST_CASE("Verify win by first column. 4 - Player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(13);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by second column. 4 - Player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(14);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by third column. 4 - Player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(15);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by forth column. 4 - Player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(12);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by first row. - Player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(3);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by second row. 4 - Player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(5);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(8);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by third row. 4 - Player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(9);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(12);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win by forth row. 4 - Player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(13);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(14);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(15);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(12);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win diagonally from top left. 4 - Player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(1);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(6);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(12);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(16);
	REQUIRE(tic_tac_toe -> game_over() == true);
}

TEST_CASE("Verify win diagonally from bottom left. 4 - Player O") {
	unique_ptr<TicTacToe> tic_tac_toe;
	tic_tac_toe = make_unique<TicTacToe4>();
	tic_tac_toe -> start_game("O");
	tic_tac_toe -> mark_board(13);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(2);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(10);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(7);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(11);
	REQUIRE(tic_tac_toe -> game_over() == false);
	tic_tac_toe -> mark_board(4);
	REQUIRE(tic_tac_toe -> game_over() == true);
}
