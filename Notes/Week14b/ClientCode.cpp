#include "Date.h"

// client code for Date project

void printDateFriend(const Date& printer) {
    // can access since friend function
    cout << printer.year << "/" << printer.month
        << "/" << printer.day;
}

// You can write overloaded operator classes in the client as well
// Without having to add them in the class spec file
bool operator==(const Date& left, const Date& right) {
    // First way  
    // if (left.getYear() == right.getYear())
    //     return true;
    // else 
    //     return false;

    // Second way
    return left.year == right.year;
}

ostream& operator<<(ostream& out, const Date& outDate) {
    out << outDate.year << "-"
        << outDate.month << "-"
        << outDate.day;
    return out;
}

istream& operator>>(istream& input, Date& inDate) {
    int year, month, day;
    cout << "enter year: ";
    input >> year;
    cout << "enter month: ";
    input >> month;
    cout << "enter day: ";
    input >> day;
    inDate.setDate(year, month, day);

    return input;
}

int main() {
    Date myDate(2021, 5, 6);
    Date myDate2(2026, 11, 25);
    Date myDate3;
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
    cout << "\n\nComparing: " << (myDate == myDate2);
    cout << "\n\nTesting date output: " << myDate2 << "\nFinished";
    cin >> myDate3;
    cout << "\n\n" << myDate3 << "\n";

}