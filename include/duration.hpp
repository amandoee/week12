#ifndef __DURATION_H_
#define __DURATION_H_


void Duration();
void setTime(int new_t);
int getDuration();
void resetTime();

class Duration {
private:
    int time;

public:
    
    Duration(int s=0);

    void setTime(int new_s);

    int getDuration();

    void resetTime();
};





#endif // DURATION