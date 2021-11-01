#include "Beverage.h"

// implementation file for Beverage class

Beverage::Beverage() {
    cout << "Called Default Beverage Constructor!\n";
    mix = new string("no mix");
    assert(mix!=NULL);
    //qty = 0
}

Beverage::Beverage(int newQty, string newDrink, string newMix) {
    cout << "Beverage non-default constructor called!\n";
    mix = new string; // only assign new memory once in the constructor,
    assert(mix!=0);
    setMix(newMix);
}

void Beverage::setMix(string newMix) {
    *mix = (newMix.length() > 0)?newMix:"no mix";
}