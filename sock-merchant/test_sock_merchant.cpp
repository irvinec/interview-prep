#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"

#include "sock_merchant.hpp"

TEST_CASE("Sock Merchant from HackerRank")
{

    SECTION("Case 1")
    {
        std::vector<int> case_1{ 1 };
        REQUIRE( sockMerchant(case_1.size(), case_1) == 0);
    }

    SECTION("Case 2")
    {
        std::vector<int> case_2{ 1, 1 };
        REQUIRE( sockMerchant(case_2.size(), case_2) == 1);
    }

    SECTION("Case 3")
    {
        std::vector<int> case_3{};
        REQUIRE( sockMerchant(case_3.size(), case_3) == 0);
    }

    SECTION("Case 4")
    {
        std::vector<int> case_4{ 1, 2, 1 };
        REQUIRE( sockMerchant(case_4.size(), case_4) == 1);
    }

    SECTION("Case 5")
    {
        std::vector<int> case_5{ 1, 2, 1, 2 };
        REQUIRE( sockMerchant(case_5.size(), case_5) == 2);
    }
}
