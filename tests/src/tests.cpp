#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this
                          // in one cpp file
                          
#include "catch.hpp"
#include "duration.hpp"



TEST_CASE("Duration is initialized to 0") {
    
    Duration d(1);
    REQUIRE(d.getDuration() == 1);
    
}