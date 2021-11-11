#include "Package.h"

int main() {
    Package myPackage("Home", "Work");
    Letter myLetter(4, "Home3", "FL");
    Box myBox(24, "Home2", "NY");

    cout << "Pkg Source: " << myPackage.getSource() << endl
        << "Pkg Destination: " << myPackage.getDestination()
        << endl;
    
    cout << "Letter Pages: " << myLetter.getnoPages() << endl
        << "Letter Source: " << myLetter.getSource() << endl
        << "Letter Destination: " << myLetter.getDestination()
        << endl;

    cout << "Box Weight: " << myBox.getWeight() << endl
        << "Box Source: " << myBox.getSource() << endl
        << "Box Destination: " << myBox.getDestination()
        << endl;

    Package *myPackage2 = new Package("@home", "@work");
    Letter *myLetter2 = new Letter(99, "@home3", "@FL");
    Box *myBox2 = new Box(17, "home2", "NY");

    cout << "\nDefault package cost: " << myPackage2->computeShipCost() << endl;
    cout << "Computing letter cost: " << myLetter2->computeShipCost() << endl;
    cout << "Computing  box cost: " << myBox2->computeShipCost() << endl;
}
