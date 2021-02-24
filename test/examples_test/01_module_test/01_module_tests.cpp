#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "numbers.h"
#include "input.h"
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify function finds min", "Find min from 1,2,3,4,5") {
	REQUIRE(find_min_value(1,2,3,4,5) == 1);
	REQUIRE(find_min_value(2,4,6,8,10) == 2);
	REQUIRE(find_min_value(21,4,13,1,4) == 1);
}

TEST_CASE("Verify function finds max", "Find max from 1,2,3,4,5") {
	REQUIRE(find_max_value(1,2,3,4,5) == 5);
	REQUIRE(find_max_value(2,4,6,8,10) == 10);
	REQUIRE(find_max_value(5,7,22,11,1) == 22);
}




/*test case echo_variable */

/*test case add_to_double_1 with 0 as parameter*/

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

