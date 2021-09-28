#include "Temperature.h"
// Client code for our Constructor Lec
// Emanuel Dobra

int main() {
    /*
    Temperature temp1, temp2(55.4, 'F');
    temp1.setTemp(23.5, 'C');
    cout << "Temp 1 is ";
    temp1.printTemp(cout);
    cout << endl;

    cout << "Temp 2 is ";
    temp2.printTemp(cout); 
    cout << endl;*/

    Temperature temp1('f');
    Temperature temp2;
    Temperature temp3(100.);
    temp3.setDegrees(75);
    temp3.setType('k');

    cout << temp3.getDegrees();

    switch (temp3.getType()) {
        case 'F': cout << "Fahrenheit"; break;
        case 'C': cout << "Celsius"; break;
        case 'k': cout << "Kelvin"; break;
        default:  cout << "Not here";
    }

}