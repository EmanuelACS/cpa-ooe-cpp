#include "PhoneList.h"

// Emanuel Dobra
// 2021-12-02
// impl file for PhoneList

PhoneList::PhoneList(string newTitle) {
    title = newTitle;
    numDirs = 0;
    firstPtr = NULL;
}

void PhoneList::showList(ostream& fout) const {
    if (firstPtr != NULL) {
        fout << "My Black Book\n";
        fout << "Name - Area Code - Phone Number\n\n"; 
        Directory *walker = firstPtr;
        while (walker != NULL) {
            fout << walker->name << " " << walker->areaCode 
                << " " << walker->phoneNo << endl;
            walker = walker->link; 
        }           
    }
    fout << "\nNumber of directories: " << numDirs; 
}

// Removes a directory node with dirName
void PhoneList::removeDirectory(string dirName) {
    // Creating walker and stalker 
    Directory* walker = firstPtr;
    Directory* stalker = NULL;

    // If walker isn't empty
    while (walker != NULL) {
        // Once walker's name is the one we want
        // break out of the while loop
        if (walker->name == dirName) {
            break;
        }
        // Continue incrementing walker and updating stalker
        stalker = walker;
        walker = walker->link;
    }

    if (walker == NULL) {
        // If walker goes past last node, 
        // it means dir with dirName was not found
        cout << "Directory not found\n";
    } else {
        if (stalker == NULL) {
            // Update firstPtr to newest list start
            firstPtr = walker->link;
        } else {
            // Assign stalker to walker
            stalker->link = walker->link;
        }
        delete walker; // Delete dynamic memory
        numDirs--; // Decrement dir count
        cout << "Directory removed\n";
    }
}