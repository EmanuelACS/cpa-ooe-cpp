#include "base.h"

void Base::setNumb(int newNumb) {
    numb = newNumb > 0 ? newNumb : 0;
}

void Base::show(ostream& out) const {
    out << "numb: " << numb << endl;
}

// purpose of const:
// initialize and set variable members of the object
// as many as we can
// always a constructor called when an object is declared 
// no return type