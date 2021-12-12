#include "Date.h"

// impl file for Date class

void Date::setDate(int newYear, int newMonth, int newDay) {
    year = newYear > 0 ? newYear : 2021;
    month = newMonth > 0 && newMonth < 13 ? newMonth : 1;
    day = newDay > 0 && newDay < 32 ? newDay : 1;
}

Date::Date(int newYear, int newMonth, int newDay) {
    setDate(newYear, newMonth, newDay);
}

void Date::showDate(ostream& out) const {
    // format should be mm/dd/yyyy
    out << (month < 10 ? "0" : "") << month << "/"
        << (day < 10 ? "0" : "") << day << "/"
        << year;
} 