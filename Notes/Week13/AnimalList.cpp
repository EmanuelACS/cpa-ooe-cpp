#include "AnimalList.h"
#include <iomanip>

AnimalList::AnimalList() {
    firstPtr = NULL;   
}


/*
1. build a new Spacestation on the heap and populate
2. make new space stations link point to the first node
3. make the first ptr point to the new code
*/
void AnimalList::addAnimalFirst(string newAnimal, int newQty) {
    // 1.
    SpaceStation* builder = new SpaceStation; // build space station
    assert(builder);
    builder->animal=newAnimal;
    builder->qty=newQty;

    // 2-3.
    builder->link = firstPtr; // add node to the beginning of the list
    firstPtr = builder; // have list point to the new node
}

// display info about each node of our linked list order
/*
1. check if linked list is null
    if not null
2. create a space station pointer to walk thorugh the linked list
3. stop when link is null
*/
void AnimalList::showList(ostream& out) const {
    if(firstPtr == NULL) 
        out << "no space stations yet\n\n";
    else {
        SpaceStation *walker = firstPtr;
        while (walker != NULL) {
            out << walker->animal << " " << walker->qty;
            walker = walker->link;
        }
    }
}