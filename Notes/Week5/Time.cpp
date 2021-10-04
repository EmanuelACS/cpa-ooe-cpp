#include "Time.h"
#include <fstream>

// Emanuel Dobra

void Time::showTime(ostream& out) const {
    out << hrs << ":"
        << mins << ":"
        << seconds;
}

void Time::setTime(int newHrs, int newMins, int newSeconds) {
    // Condesnsed if statements
    hrs = (newHrs > 0 && newHrs <= 12) ? newHrs : 12;
    mins = (newMins > 0 && newMins < 60) ? newMins : 0;
    seconds = (newSeconds > 0 && newSeconds < 60) ? newSeconds : 0;
}

void Time::setTime(int newHrs, int newMins) {
    setTime(newHrs, newMins);
}

Time::Time(int initialHrs, int initialMins, int initialSeconds) {
    setTime(initialHrs, initialMins, initialSeconds);
}

/*
Time::Time(int initialHrs, int initialMins, int initialSeconds) {
    setTime(initialHrs, initialMins, initialSeconds);
}

Time::Time(int initialHrs, int initialMins) {
    setTime(initialHrs, initialMins, 0);
}

Time::Time(int initialHrs) {
    setTime(initialHrs, 0, 0);
}

Time::Time() {
    hrs = 12;
    mins = seconds = 0;
}*/

