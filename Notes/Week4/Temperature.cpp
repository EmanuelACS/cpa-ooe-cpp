#include "Temperature.h"

// Implementation file for Temperature Class
// Emanuel Dobra

void Temperature::setTemp(double newDegrees, char newType) {
    newType = toupper(newType);
    switch (newType) {
        case 'C': case 'F': case 'K':
            degrees = newDegrees;
            type = newType;
            break;
        default: 
            cout << "Incorrect temperature type" << newType << endl;
            cout << "Setting tepm to Celsius" << endl;
            // exit(453);
            // system("pause");
            newType = 'C';
    }

    
}

void Temperature::printTemp(ostream& out) const {
    out << degrees << " " << char(248) << type;
}

Temperature::Temperature() {
    cout << "default constructor called" << endl;
    degrees = 0.0;
    type = 'C';
}

Temperature::Temperature(double initialDegrees, char initialType) {
    cout << "non-default constructor called" << endl;
    setTemp(initialDegrees, initialType);
}