#include "Drink.h"

// impl file for Drink class

Drink::Drink() {
    cout << "Drink Default Const Called!\n";
    qty = 4; 
    typeOfDrink = new string("water");
    // whenever u have new the next statement snould be assert 
    assert(typeOfDrink);
}

Drink::Drink(int newQty, string newDrink) {
    cout << "Drink non-default const called!\n";
    setQty(newQty);
    typeOfDrink = new string;
    assert(typeOfDrink);
    *typeOfDrink = newDrink;
}

void Drink::setQty(int newQty) {
    qty = (newQty > 0 && newQty <= 30) ? newQty : 0;
}

void Drink::setTypeOfDrink(string newDrink) {
    *typeOfDrink = newDrink;
}