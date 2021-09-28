#include <iostream>
using namespace std;
/*
    Specification file for the Temperature class
    Emanuel Dobra, Sepmteber 27, 2021
*/

class Temperature {
    public:
        void setTemp(int /*degrees*/, char /*type*/); // sets values for member variables
        void printTemp(ostream&) const;
        int getDegrees() const { return degrees; };
        char getType() const { return type; };
        Temperature(); // default constructor, function prototype, necessary to use class if non-default exists
        Temperature(int /*initial degrees*/, char /*initial type*/); // non-default constructor
        Temperature(double /*initial degrees*/);
        Temperature(char /*initial type*/);
        void setDegrees(int /*newDegrees*/);
        void setType(char /*newType*/);
    
    private: 
        int degrees;
        char type;
};