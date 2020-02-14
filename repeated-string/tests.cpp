#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"

#include "problem.hpp"

TEST_CASE("Case 1")
{
    REQUIRE( repeatedString("", 0) == 0 );
}

TEST_CASE("Case 2")
{
    REQUIRE( repeatedString("a", 0) == 0 );
}

TEST_CASE("Case 3")
{
    REQUIRE( repeatedString("a", 1) == 1 );
}

TEST_CASE("Case 4")
{
    REQUIRE( repeatedString("aa", 1) == 1 );
}

TEST_CASE("Case 5")
{
    REQUIRE( repeatedString("aba", 4) == 3 );
}

TEST_CASE("Case 6")
{
    REQUIRE( repeatedString("d", 590826798023) == 0 );
}

TEST_CASE("Case 7")
{
    REQUIRE( repeatedString("beeaabc", 711560125001) == 203302892858 );
}
