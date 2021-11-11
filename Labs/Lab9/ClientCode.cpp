#include "Package.h"

int main() {
    Package myPackage("Home", "Work");
    Box myBox(24, "Home2", "NY");
    Letter myLetter(4, "Home3", "FL");

    cout << "Pkg Source: " << myPackage.getSource() 
        << "Pkg Destination: " << myPackage.getDestination()
        << endl;

    cout << "Box Weight: " << myBox.getWeight() 
        << "Box Source: " << myBox.getSource()
        << "Box Destination: " << myBox.getDestination()
        << endl;
    
    cout << "Letter Pages: " << myLetter.getnoPages() 
        << "Letter Source: " << myLetter.getSource()
        << "Letter Destination: " << myLetter.getDestination()
        << endl;
}
