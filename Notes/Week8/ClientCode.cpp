#include "Beverage.h"

// client code for week8

int main() {
    Beverage* beverageOne = new Beverage(12, "juice", "water");
    assert(beverageOne);   
    beverageOne->show(); // user arrow operator since it's a pointer 
    // same as (*beverageOne.show())
    //(*beverageOne).show();
    delete beverageOne; // calls the destructor
 

    // create dynamic array 
    int numb;
    cout << "Enter number of elements: ";
    cin >> numb;
    Beverage* beverageArray = new Beverage[numb];
    assert(beverageArray != NULL);
    cout << "beverageArray is " << beverageArray << endl; // gets memory location
    // create a pointer to a Beverage and make it point to the first element of the array
    Beverage* beveragePtr = beverageArray;
    cout << "beveragePtr is " << beveragePtr << endl;
    //use the beveragePtr to walk down the array with a for loop.
    for (int index = 0; index < numb; index++) {
        (beveragePtr+index)->show(); //same thing
        //beveragePtr++; 
    }
    cout << "beveragePtr is now " << beveragePtr << endl;

}