#include "Date.h"

// client code for Date project

void printDateFriend(const Date& printer) {
    // can access since friend function
    cout << printer.year << "/" << printer.month
        << "/" << printer.day;
}

int main() {
    Date myDate(2021, 5, 6);
    Date myDate2(2022, 11, 25);
    // myDate2.year; // can't access since private

    myDate.showDate(cout);
    cout << endl << "\nadding one year\n";
    ++myDate; // calls overloaded operator
    myDate.showDate(cout);
    cout << endl << "\nadding some days\n";
    myDate += 10;
    myDate.showDate(cout);
    cout << "\n\ncalling friend function " <<  endl;
    printDateFriend(myDate);

}