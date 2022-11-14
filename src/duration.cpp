#include "duration.hpp"
#include <iostream>
#include <assert.h>
using namespace std;

Duration::Duration(int t) {
    time = t;
}

void Duration::setTime(int new_t) {
    assert(new_t >= 0);
    time = new_t;
}

int Duration::getDuration() {
        return time;
}

void Duration::resetTime() {
    time = 0;
}


