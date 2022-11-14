#include "duration.hpp"
#include <iostream>
#include <assert.h>
using namespace std;

class Duration {

private:
    int time;

public:
    
    Duration(int s=0);

    void setTime(int new_s);

    int getDuration();

    void resetTime();
};

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

/*
int main () {
    Duration d(1);
    cout << d.getDuration() << endl;
    return 0;
}
*/