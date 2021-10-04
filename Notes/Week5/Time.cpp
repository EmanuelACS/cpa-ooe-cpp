#include "Time.h"
#include <fstream>

// Emanuel Dobra

void Time::showTime(ostream& out) const {
    out << hrs << ":"
        << mins << ":"
        << seconds;
}

void Time::setTime(int newHrs, int newMins, int newSeconds) {
    hrs = newHrs;
    mins = newMins;
    seconds = newSeconds;
}

void Time::setTime(int newHrs, int newMins) {
    setTime(newHrs, newMins);
}