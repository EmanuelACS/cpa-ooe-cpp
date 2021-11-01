#include "Beverage.h"

// client code for week8

int main() {
    Beverage* beverageOne = new Beverage(12, "juice", "water");
    assert(beverageOne);   
    beverageOne->show(); // user arrow operator since it's a pointer 
    // same as (*beverageOne.show())
    //(*beverageOne).show();
}