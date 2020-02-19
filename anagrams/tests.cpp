#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"

#include "problem.hpp"

TEST_CASE("Case 1")
{
    REQUIRE( sherlockAndAnagrams("a") == 0 );
}

TEST_CASE("Case 2")
{
    REQUIRE( sherlockAndAnagrams("aa") == 1 );
}

TEST_CASE("Case 3")
{
    REQUIRE( sherlockAndAnagrams("aba") == 2 );
}

TEST_CASE("Case 4")
{
    REQUIRE( sherlockAndAnagrams("abba") == 4 );
}

TEST_CASE("Case 5")
{
    REQUIRE( sherlockAndAnagrams("kkkk") == 10 );
}

TEST_CASE("Case 6")
{
    REQUIRE( sherlockAndAnagrams("abcd") == 0 );
}

TEST_CASE("Case 7")
{
    REQUIRE( sherlockAndAnagrams("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa") == 166650);
}
