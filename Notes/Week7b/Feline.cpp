#include "Feline.h"

// impl file for Feline class

void Feline::setNumbLegs(int newNumLegs) {
    numLegs = (newNumLegs > 0) ? newNumLegs : 4;
}

void Feline::setName(string newName) {
    *name = newName;
}

void Feline::petCat(ostream& out) const {
    out << name << " runs away after you pet it \n";
}

Feline::Feline() {
    cout << "in default constr of feline\n";
    numLegs = 4;
    name = new string("cat");
    assert(name);
}