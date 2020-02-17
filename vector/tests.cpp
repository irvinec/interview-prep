#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"

#include "my_vector.hpp"

TEST_CASE("Init List Constructor")
{
    SECTION("All elements provided")
    {
        MyVector<3> vec{ 1.0f, 2.0f, 3.0f };
        REQUIRE( vec[0] == 1.0f );
        REQUIRE( vec[1] == 2.0f );
        REQUIRE( vec[2] == 3.0f );
    }

    SECTION("Some elements provided")
    {
        # if 0
            // As expected this is a compiler error
            Vector<3> vec{ 1.0f, 2.0f };
        #endif
    }
}

TEST_CASE("Fill")
{
    MyVector<3> vec{};
    vec.fill(1.0f);

    REQUIRE( vec[0] == 1.0f );
    REQUIRE( vec[1] == 1.0f );
    REQUIRE( vec[2] == 1.0f );
}
