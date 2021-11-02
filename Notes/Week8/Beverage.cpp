#include "Beverage.h"

// implementation file for Beverage class

Beverage::Beverage() {
    cout << "Called Default Beverage Constructor!\n";
    mix = new string("no mix");
    assert(mix!=NULL);
    //qty = 0
}

// Specify we call a specific constructore using ":" then the constructor
Beverage::Beverage(int newQty, string newDrink, string newMix) : Drink(newQty, newDrink)  {
    cout << "Beverage non-default constructor called!\n";
    mix = new string; // only assign new memory once in the constructor,
    assert(mix!=0);
    setMix(newMix);
}

void Beverage::setMix(string newMix) {
    *mix = (newMix.length() > 0)?newMix:"no mix";
}

void Beverage::show() const {
    Drink::show();
    cout << "mix is: " << *mix << endl;
}

Beverage::~Beverage() {
    cout << "Beverage Destructor was called!\n";
}