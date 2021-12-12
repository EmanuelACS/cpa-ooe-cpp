#include <iostream>
#include <fstream>
using namespace std;

// spec file for Date class

class Date {
    public:
        Date(int = 2021 /*year*/, int = 12 /*month*/, int = 1 /*day*/);
        int getYear() const { return year; }
        int getMonth() const { return month; }
        int getDay() const { return day; }
        void setDate(int /*year*/, int /*month*/, int /*day*/);
        void showDate(ostream& /*output file or console*/) const;

    private:
        int year, month, day;
};