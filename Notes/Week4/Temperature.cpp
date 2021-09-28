#include "Temperature.h"

// Implementation file for Temperature Class
// Emanuel Dobra

void Temperature::setTemp(int newDegrees, char newType) {
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
    cout << "enter temperature and type" << endl;
    cin >> degrees >> type;
    degrees = 0;
    type = 'C';
}

Temperature::Temperature(int initialDegrees, char initialType) {
    cout << "non-default constructor called" << endl;
    setTemp(initialDegrees, initialType);
}

Temperature::Temperature(double initialDegrees) {
    degrees = static_cast<int>(initialDegrees);
    type = 'C';
}

Temperature::Temperature(char initialType) {
    setTemp(0, initialType);
}

void Temperature::setDegrees(int newDegrees) {
    degrees = newDegrees;
}

void Temperature::setType(char newType) {
    setTemp(degrees, newType);
}