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
    if(firstPtr == NULL) 
        fout << "no space stations yet\n\n";
    else {
        fout << "My Black Book\n";
        fout << "Name - Area Code - Phone Number\n\n"; 
        Directory *walker = firstPtr;
        while (walker != NULL) {
            fout << walker->name << " " << walker->areaCode << " " << walker->phoneNo << endl;
            walker = walker->link;
            if (walker == NULL)
                fout << "\nNumber of directories: " << numDirs; 
        }
    }
}