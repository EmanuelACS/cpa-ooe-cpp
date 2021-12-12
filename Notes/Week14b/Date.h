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
        void operator++() { year++; } // same as void addYear() { year++; }
        void operator+=(int /*day*/); 

    private:
        int year, month, day;
        // Friend functions allow us to allow the client
        // to create functions which can access private or protected members
        friend void printDateFriend(const Date& /*Date object*/);
};