#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this
                          // in one cpp file



#include "catch.hpp"
#include "duration.hpp"



TEST_CASE("Duration is initialized to 0") {
    
    Duration d;
    REQUIRE(d.getDuration() == 0);
    
    d.setTime(5);
    REQUIRE(d.getDuration() == 5);

    d.resetTime();
    REQUIRE(d.getDuration() == 0);

    d.tick();
    REQUIRE(d.getDuration() == 1);

    d.tick(3);
    REQUIRE(d.getDuration() == 4);

    //testcase where alarm is 1 second away.
    d.setAlarm(5);
    REQUIRE(d.tick() == false);
    REQUIRE(d.checkAlarm()==true);

    REQUIRE(d.tick() == true);
    REQUIRE(d.checkAlarm()==false);

    d.setAlarm(100);
    REQUIRE(d.tick() == false);

    
}

TEST_CASE("BLA BLA BLA") {




}