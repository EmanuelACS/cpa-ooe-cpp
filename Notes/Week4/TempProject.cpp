#include "Temperature.h"
// Client code for our Constructor Lec
// Emanuel Dobra

int main() {
    Temperature temp1, temp2(55.4, 'F');
    temp1.setTemp(23.5, 'C');
    cout << "Temp 1 is ";
    temp1.printTemp(cout);
    cout << endl;

    cout << "Temp 2 is ";
    temp2.printTemp(cout); 
    cout << endl;
}