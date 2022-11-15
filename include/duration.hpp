#ifndef __DURATION_H_
#define __DURATION_H_
#include <stdbool.h>

class Duration {
private:

    //3 private attributter relevante for en alarm.
    int time;
    int alarm = 0;
    bool alarmHasBeenSet = false;

    //Tjekker og opdaterer alarm hvis nødvendigt.
    bool checkAndUpdateAlarm();

public:
    
    Duration();

    void setTime(int t);

    int getDuration();

    void resetTime();

    bool tick();

    bool tick(int dt);

    void setAlarm(int t);

    bool checkAlarm();
};



#endif // DURATION