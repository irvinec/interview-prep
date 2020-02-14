#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"

#include "cloud_jump.hpp"

TEST_CASE("Cloud Jump from HackerRank")
{

    SECTION("Case 1")
    {
        std::vector<int> c{ 0 };
        REQUIRE( jumpingOnClouds(c) == 0 );
    }

    SECTION("Case 2")
    {
        std::vector<int> c{ 0, 0 };
        REQUIRE( jumpingOnClouds(c) == 1 );
    }

    SECTION("Case 3")
    {
        std::vector<int> c{ 0, 1, 0 };
        REQUIRE( jumpingOnClouds(c) == 1 );
    }

    SECTION("Case 4")
    {
        std::vector<int> c{ 0, 0, 0 };
        REQUIRE( jumpingOnClouds(c) == 1 );
    }
}
