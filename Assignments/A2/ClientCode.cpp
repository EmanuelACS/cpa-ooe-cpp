#include "Package.h"

// Polymorphic function showing ship cost of any package or derived package class
void show(const Package * anyPackage) {
    cout << "Shipping cost: " << anyPackage->computeShipCost() << "\n\n";
}

int main() {
    // Packages on the stack test    
    Package myPackage;
    Letter myLetter(4, "Home3", "FL");
    Box myBox(24, "Home2", "NY");    

    cout << "\nPkg Source: " << myPackage.getSource() << endl
        << "Pkg Destination: " << myPackage.getDestination() << endl;
    show(&myPackage);
    
    cout << "Letter Destination: " << myLetter.getDestination() << endl
        << "Letter Source: " << myLetter.getSource() << endl
        << "Letter #Pages: " << myLetter.getnoPages() << endl;
    show(&myLetter);

    cout << "Box Destination: " << myBox.getDestination() << endl
        << "Box Source: " << myBox.getSource() << endl
        << "Box Weight: " << myBox.getWeight() << endl;
    show(&myBox);

    // Packages on the heap test
    Package *myPackage2 = new Package("SKT", "ALB");    
    assert(myPackage2);
    Letter *myLetter2 = new Letter();                       
    assert(myLetter2);
    Box *myBox2 = new Box();               
    assert(myBox2);
    
    cout << "\nPkg Source: " << myPackage2->getSource() << endl
        << "Pkg Destination: " << myPackage2->getDestination() << endl;
    show(myPackage2);
    
    cout << "Letter Destination: " << myLetter2->getDestination() << endl
        << "Letter Pages: " << myLetter2->getnoPages() << endl
        << "Letter Source: " << myLetter2->getSource() << endl;
    show(myLetter2);

    cout << "Box Destination: " << myBox2->getDestination() << endl
        << "Box Source: " << myBox2->getSource() << endl
        << "Box Weight: " << myBox2->getWeight() << endl;
    show(myBox2);
    
    // Deallocate memory
    delete myPackage2, myLetter2, myBox2;
}
/* Output
Enter package source: NY
Enter package destination: FL

Pkg Source: NY        
Pkg Destination: FL   
Shipping cost: 0      

Letter Destination: FL
Letter Source: Home3  
Letter #Pages: 4      
Shipping cost: 0.45   

Box Destination: NY   
Box Source: Home2     
Box Weight: 24        
Shipping cost: 4.75   

Enter package source: RS
Enter package destination: PR 
Enter total pages letter has: 27
Enter package source: QE
Enter package destination: SE
Enter weight: 12

Pkg Source: SKT
Pkg Destination: ALB
Shipping cost: 0

Letter Destination: PR
Letter Pages: 27
Letter Source: RS
Shipping cost: 1.35

Box Destination: SE
Box Source: QE
Box Weight: 12
Shipping cost: 2.75
*/