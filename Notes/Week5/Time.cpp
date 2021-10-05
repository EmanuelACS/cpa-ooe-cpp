#include "Time.h"
#include <fstream>

// Emanuel Dobra

void Time::showTime(ostream& out) const {
    out << hrs << ":"
        << (mins < 10 ? "0" : "") << mins << ":"
        << (seconds < 10 ? "0" : "") << seconds;
}

void Time::setTime(int newHrs, int newMins, int newSeconds) {
    // Condesnsed if statements
    // var = (Condition) (if true ?) (value) (otherwise :) (value)
    hrs = (newHrs > 0 && newHrs <= 12) ? newHrs : 12;
    mins = (newMins > 0 && newMins < 60) ? newMins : 0;
    seconds = (newSeconds > 0 && newSeconds < 60) ? newSeconds : 0;
}

Time::Time(int initialHrs, int initialMins, int initialSeconds) {
    setTime(initialHrs, initialMins, initialSeconds);
}

Time::Time(string fileName) {
    ifstream fin(fileName);
    if(!fin.is_open()) {
        cout << "Failed to open " << fileName << endl;
        system("pause");
        exit(-1);
    }
    fin >> hrs >> mins >> seconds;
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

