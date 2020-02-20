#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"

#include "problem.hpp"

TEST_CASE("Case 1")
{
    REQUIRE( alternatingCharacters("a") == 0 );
    REQUIRE( alternatingCharacters("ab") == 0 );
    REQUIRE( alternatingCharacters("aab") == 1 );
    REQUIRE( alternatingCharacters("aba") == 0 );
    REQUIRE( alternatingCharacters("aabb") == 2 );
    REQUIRE( alternatingCharacters("aabbaaba") == 3 );
}
