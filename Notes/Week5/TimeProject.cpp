#include "Time.h"

// Adding const before reference makes sure it remains unchanged
// Add objects by reference for performance
void showTime(const Time& timeObj) {
    cout << "Starts at " << timeObj.getHrs() << ":"
        << timeObj.getMins() << ":" 
        << timeObj.getSeconds() << endl;
} 

Time getUserTime() {
    int hh, mm, ss;
    cout << "Enter hour, minute and seconds: ";
    cin >> hh >> mm >> ss;
    Time inputTime(hh, mm, ss);
    return inputTime;
}

void getUserTimeBetter(Time& timeObj) {
    int hh, mm, ss;
    cout << "Enter hour, minute and seconds: ";
    cin >> hh >> mm >> ss;
    timeObj.setTime(hh, mm, ss);
}

void daylightSavings(Time& timeObj) {
    timeObj.setTime(timeObj.getHrs()+1, timeObj.getMins(), timeObj.getSeconds());
}

// Client code for time project
int main() {
    Time fileIn("input.dat");
    showTime(fileIn);

    // Time timeOne;
    // timeOne.setTime(785, 86, 3);
    // timeOne.showTime(cout);
    // cout << endl;

    // Time timeTwo(4, 30, 23);
    // timeTwo.showTime(cout);
    // cout << endl;

    Time timeThree(6);
    cout << "Before: \n";
    showTime(timeThree);
    daylightSavings(timeThree);
    cout << "After: \n";
    showTime(timeThree);

    // bad way
    // Time userTime = getUserTime();
    // showTime(userTime);
    // good way
    Time userTimeBetter;
    getUserTimeBetter(userTimeBetter);
    showTime(userTimeBetter);
}