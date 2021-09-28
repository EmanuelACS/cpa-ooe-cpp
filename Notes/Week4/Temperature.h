#include <iostream>
using namespace std;
/*
    Specification file for the Temperature class
    Emanuel Dobra, Sepmteber 27, 2021
*/

class Temperature {
    public:
        void setTemp(double /*degrees*/, char /*type*/); // sets values for member variables
        void printTemp(ostream&) const;
        double getDegrees() const { return degrees; };
        char getType() const { return type; };
        Temperature(); // default constructor, function prototype, necessary to use class if non-default exists
        Temperature(double /*initial degrees*/, char /*initial type*/); // non-default constructor
    
    private: 
        double degrees;
        char type;
};