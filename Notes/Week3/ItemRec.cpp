#include "ItemRec.h"
/*
    Implementation file for ItemRec
    Name: 
*/

void ItemRec::printItem(ostream& out) const {
    out << itemCode << " " << description << endl
        << " quantity on hand " << qoh << endl;
}

void ItemRec::setItem(int newItemCode, string newDescription, int newQoh) {
    itemCode = newItemCode;
    description = newDescription;
    qoh = newQoh;
}

string ItemRec::determineAvailable(int orderAmt) const {
    string available;
    if (orderAmt <= qoh) 
        available = "item is available";
    else 
        available = "item is not available";
    return available;
}
