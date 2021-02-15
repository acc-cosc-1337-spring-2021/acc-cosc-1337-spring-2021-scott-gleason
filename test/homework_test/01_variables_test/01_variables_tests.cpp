#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Test Get Sales Tax", "Verify function returns .675 using parameter of 10") {
	REQUIRE(get_sales_tax(10) == .675);
}

TEST_CASE("Test Get Sales Tax 1", "Verify function returns .1.35 using parameter of 20") {
	REQUIRE(get_sales_tax(20) == 1.35);
}

TEST_CASE("Test Get Tip Amount 1", "Verify function returns 3 using parameter of 20 and .15") {
	REQUIRE(get_tip_amount(20, .15) == 3);
}

TEST_CASE("Test Get Tip Amount 2", "Verify function returns 4 using parameter of 20 and .20") {
	REQUIRE(get_tip_amount(20, .20) == 4);
}

