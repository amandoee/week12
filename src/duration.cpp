#include "duration.hpp"
#include <iostream>
#include <assert.h>
using namespace std;

//Sætter som udgangspunkt tiden til 0.
Duration::Duration() {
    time = 0;
}

//funktion til at sætte tiden til en vilkårlig værdi over 0
void Duration::setTime(int t) {
    assert(t >= 0);
    time = t;
}

//funktion til at returnere det private attribut
int Duration::getDuration() {
        return time;
}

//funktion til at sætte tiden tilbage til 0. Genstarte tiden.
void Duration::resetTime() {
    time = 0;
}

//inkrementerer tiden med 1. Tilsvarende til 1 sekund. Kalder min tjekOgOpdater funktion herefter.
bool Duration::tick() {
    time++;

    return checkAndUpdateAlarm();

}

//inkrementerer tiden med dt. Tilsvarende til dt antal sekund. Kalder min tjekOgOpdater funktion herefter.
bool Duration::tick(int dt) {
    assert(dt>0);
    time+=dt;

    return checkAndUpdateAlarm();
}

//Sætter alarmens tidsmængde, samt gør det private attribut alarmHasBeenSet=true;
void Duration::setAlarm(int t) {
    assert(t>time);
    alarmHasBeenSet = true;
    alarm=t;
}

//Min egen funktion til at tjekke om alarmen er blevet sat.
bool Duration::checkAlarm() {
    return alarmHasBeenSet;
}

//Tjekker om tiden er overskredet alarm, hvis alarm er aktiveret via. alarmHasBeenSet
bool Duration::checkAndUpdateAlarm() {
    if (time>alarm && alarmHasBeenSet==true) {
        alarmHasBeenSet=false;
        return true;
    } else {
        return false;
    }
}