#include <iostream>
#include <string>
using namespace std;

// Emanuel Dobra
// Specification file for Time Class
// learning about default params and condensed if statements

class Time {
    public:
        void setTime(int /*hrs*/, int /*mins*/, int /*seconds*/);
        void setTime(int /*hrs*/, int /*mins*/);
        void showTime(ostream& /*file/cout*/) const;
        int getHrs() const { return hrs; }
        int getMins() const { return mins; }
        int getSeconds() const { return seconds; }

    private: 
        int hrs, mins, seconds;
}