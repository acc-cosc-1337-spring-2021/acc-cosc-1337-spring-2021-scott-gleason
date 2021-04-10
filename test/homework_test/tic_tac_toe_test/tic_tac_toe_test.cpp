#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify if get player returns X") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.get_player() == "X");
}

TEST_CASE("Verify if get player returns O") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");

	REQUIRE(tic_tac_toe.get_player() == "O");
}


TEST_CASE("Verify if check board full function works.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(5);
	tic_tac_toe.mark_board(8);
	tic_tac_toe.mark_board(6);
	tic_tac_toe.mark_board(9);
	tic_tac_toe.mark_board(7);
	tic_tac_toe.game_over();
	REQUIRE(tic_tac_toe.get_winner() == "C");
}

TEST_CASE("Verify win by first column.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by second column.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(5);
	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by third column.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(3);
	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(6);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by first row.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(7);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by second row.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(5);
	tic_tac_toe.mark_board(7);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by third row.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(7);
	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(8);
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win diagonally from top left.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(5);
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win diagonally from bottom left.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(7);
	tic_tac_toe.mark_board(2);
	tic_tac_toe.mark_board(5);
	tic_tac_toe.mark_board(4);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == true);
}

