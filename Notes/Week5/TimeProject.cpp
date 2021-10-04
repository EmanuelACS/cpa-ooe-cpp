#include "Time.h"

// Adding const before reference makes sure it remains unchanged
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

// Client code for time project
int main() {
    Time timeOne;
    timeOne.setTime(2, 999, 32);
    timeOne.showTime(cout);
    cout << endl;

    Time timeTwo(4, 30, 23);
    timeTwo.showTime(cout);
    cout << endl;

    Time timeThree(2, 35);
    showTime(timeThree);

    // bad way
    Time userTime = getUserTime();
    showTime(userTime);
    // good way
    Time userTimeBetter;
    getUserTimeBetter(userTimeBetter);
    showTime(userTimeBetter);
}