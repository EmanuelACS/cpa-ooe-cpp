#include "Tiger.h"

// client code for cat program

int main() {
    // Feline normalCat;
    //normalCat.petCat(cout);
    Tiger* tigerOne = new Tiger;
    assert(tigerOne);
    tigerOne->petCat(cout);
    delete tigerOne;
}