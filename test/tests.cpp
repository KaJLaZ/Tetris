#include <catch2/catch.hpp>

int factorial( int number ) {
 return number;
} 

TEST_CASE( "test" ) {
    REQUIRE( factorial(0) == 0 );
}