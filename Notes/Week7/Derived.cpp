#include "Derived.h"

// imp for derived class

void Derived::setValue(int newValue) {
    value = (newValue > 10 && newValue < 50) ? newValue : 10;
}

void Derived::setBoth(int newNumb, int newValue) {
    setValue(newValue);
    setNumb(newNumb);
}

void Derived::show(ostream& out) const {
    out << "value= " << value << endl;
    Base::show(out);
}

Derived::Derived() {
    cout << "Default constructor called\n";
    value = 0;
}