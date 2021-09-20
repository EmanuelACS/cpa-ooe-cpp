#include <iostream>
#include <string> 
#include <fstream>
#include "ItemRec.h"

/*
Client Code
Name: 
*/

int main() {
    ItemRec spinner;
    ItemRec forkLift;
    spinner.setItem(1, "fast", 500);
    cout << "spinner is used to: " << spinner.getDescription() << endl;
    forkLift.setItem(2, "lifts", 400);
    cout << "forklift ise used to: " << forkLift.getDescription() << endl;
    spinner.printItem(cout);
    forkLift.printItem(cout);

    int orderAmount;
    cout << "How many forklifts do you want: ";
    cin >> orderAmount;
    cout << forkLift.determineAvailable(orderAmount) << endl;
    
    
    system("pause");
}