/** 
 * @file main.cpp
 * @author Martin Ukrop
 * @licence MIT Licence
 */

#include "fact.h"

// Tell CATCH to define its main function here
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Factorial testing", "[factorial]") {
	REQUIRE(MyMath::factorial(1) == 1);
	REQUIRE(MyMath::factorial(2) == 2);
	REQUIRE(MyMath::factorial(3) == 6);
	REQUIRE(MyMath::factorial(10) == 3628800);
}
