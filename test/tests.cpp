#include <catch2/catch.hpp>

int Factorial( int number ) {
 return number;
} 

TEST_CASE( "test" ) {
    REQUIRE( Factorial(0) == 0 );
}