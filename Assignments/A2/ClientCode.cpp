#include "Package.h"

// have to make destructor also virtual
// since this is a room obj function
void show(const Package* cake) {
    cout << "\n\nInside const show function\n\n";
    cake->computeShipCost();
    delete cake; // last step
}

int main() {
    Letter *testL1 = new Letter();
    Letter testL2(99, "sourceL", "destL");

    //Package *test1 = new Package();
    //assert(test1);
    //Package test2("sourceP", "destP");
    //Box *testB1 = new Box();
    //Box testB2(99, "sourceB", "destB");
    //Letter *testL1 = new Letter();
    //Letter testL2(99, "sourceL", "destL");

    //cout << test1->getSource() << endl;
    //cout << test2.getSource() << endl;
    //cout << test1->getDestination() << endl;
    //cout << test2.getDestination() << endl;
    //cout << testB1->computeShipCost() << endl;
    //cout << testB2.computeShipCost() << endl;
    cout << testL1->computeShipCost() << endl;
    cout << testL2.computeShipCost() << endl;

    //show(test1);
    //show(&test2);
    //show(testB1);
    //show(&testB2);
    //show(testL1);
    //show(&testL2);
    
    // Package myPackage("Home", "Work");
    // Letter myLetter(4, "Home3", "FL");
    // Box myBox(24, "Home2", "NY");    

    // cout << "Pkg Source: " << myPackage.getSource() << endl
    //     << "Pkg Destination: " << myPackage.getDestination()
    //     << endl;
    
    // cout << "Letter Pages: " << myLetter.getnoPages() << endl
    //     << "Letter Source: " << myLetter.getSource() << endl
    //     << "Letter Destination: " << myLetter.getDestination()
    //     << endl;

    // cout << "Box Weight: " << myBox.getWeight() << endl
    //     << "Box Source: " << myBox.getSource() << endl
    //     << "Box Destination: " << myBox.getDestination()
    //     << endl;

    // Package *myPackage2 = new Package("@home", "@work");     assert(myPackage2);
    // Letter *myLetter2 = new Letter();    assert(myLetter2);
    // Box *myBox2 = new Box(17, "home2", "NY");    assert(myBox2);
    

    // cout << "\nDefault package cost: " << myPackage2->computeShipCost() << endl;
    // cout << "Computing letter cost: " << myLetter2->computeShipCost() << endl;
    // cout << "Computing  box cost: " << myBox2->computeShipCost() << endl;
}
