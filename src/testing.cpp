#include "fact.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Factorial testing", "[factorial]") {
	REQUIRE(factorial(1) == 1);
	REQUIRE(factorial(2) == 2);
	REQUIRE(factorial(3) == 6);
	REQUIRE(factorial(10) == 3628800);
}
