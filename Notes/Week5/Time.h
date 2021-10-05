#include <iostream>
#include <string>
using namespace std;

// Emanuel Dobra
// Specification file for Time Class
// learning about default params and condensed if statements

class Time {
    public:
        void setTime(int /*hrs*/, int /*mins*/, int = 0 /*seconds*/);
        //not allowed due to now having default seconds above
        // void setTime(int /*hrs*/, int /*mins*/); 
        void showTime(ostream& /*file/cout*/) const;
        int getHrs() const { return hrs; }
        int getMins() const { return mins; }
        int getSeconds() const { return seconds; }

        // Write all of this in one constructor
        // Time(int /*hrs*/, int /*mins*/, int /*seconds*/);
        // Time(int /*hrs*/, int /*mins*/);
        // Time(int /*hrs*/);
        // Time();

        // Constructor with default params
        Time(int = 1 /*hrs*/, int = 0 /*mins*/, int = 0 /*seconds*/);
        Time(string /*inputFile*/);


    private: 
        int hrs, mins, seconds;
};