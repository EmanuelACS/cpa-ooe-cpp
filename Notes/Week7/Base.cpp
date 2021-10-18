#include "base.h"

void Base::setNumb(int newNumb) {
    numb = newNumb > 0 ? newNumb : 0;
}

void Base::show(ostream& out) const {
    out << "numb: " << numb << endl
        << "desc: " << *desc << endl;
}

Base::Base() {
    cout << "Inside base constructor\n";
    numb = 0;
    // works
    //*desc = "some description"; 
    // heap
    desc = new string("new desc");
    assert(desc != 0);
}

void Base::setDesc(string newDesc) {
    *desc = (newDesc.length() != 0)?newDesc:"empty";
}

// purpose of constructor:
// initialize and set variable members of the object
// as many as we can
// always a constructor called when an object is declared 
// no return type