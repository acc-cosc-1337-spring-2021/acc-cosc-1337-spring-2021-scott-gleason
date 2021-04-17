#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

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
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	tic_tac_toe.game_over();
	REQUIRE(tic_tac_toe.game_over() == true);
	REQUIRE(tic_tac_toe.get_winner() == "C");
}

//Test cases for player X winning.

TEST_CASE("Verify win by first column.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by second column.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by third column.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by first row.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by second row.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by third row.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win diagonally from top left.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win diagonally from bottom left.") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == true);
}

//Test cases for player O winning

TEST_CASE("Verify win by first column - player O") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by second column - player O") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by third column - player O") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by first row - player O") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by second row - player O") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win by third row - player O") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win diagonally from top left - player O") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify win diagonally from bottom left - player O") {
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify get winner totalS") {
	TicTacToe tic_tac_toe;
	TicTacToeManager manager;
	int x = 0;
	int o = 0;
	int t = 0;

	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == true);
	manager.save_game(tic_tac_toe);

	tic_tac_toe.start_game("O");
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == true);
	manager.save_game(tic_tac_toe);

	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	tic_tac_toe.game_over();
	REQUIRE(tic_tac_toe.game_over() == true);
	manager.save_game(tic_tac_toe);
	
	manager.get_winner_total(x, o, t);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);

	
	


}

