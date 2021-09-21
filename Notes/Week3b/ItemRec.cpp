#include "ItemRec.h"
#include<iomanip>
using namespace std;

//Implementation file for Module 3 in class exercise (ItemRec)
// COMP333- Colin Graves

/* Complete the following tasks:
*
* 1.Add the changes for the ItemTracking data type where needed
* 2.Write the function that will change a qoh, ensure the new quo is not less than 0.
* 3.Add validation to the setItem function to ensure there are characters in the section, if not, assign it "NO Section"

*/
void ItemRec::printItem(ostream& out) const
{
	out << "Item code: " << itemTrack.itemCode << endl
        << "Item section: " << itemTrack.section << endl
        << "Description: " << description << endl
		<< "quantity on hand " << qoh << endl;

}

void ItemRec::setItem(ItemTracking newItemTrack, string newDescription,
	int newQoh)
{
	itemTrack = newItemTrack;
    if (itemTrack.section.length() == 0) {
        itemTrack.section = "No Section";
    }
	description = newDescription;
	qoh = newQoh;
}

string ItemRec::determineAvailable(int orderAmt) const
{
	string available;
	if (orderAmt <= qoh)
		available = "item is available";
	else
		available = "item is not available";
	return available;
}


//complete task 2 below
void ItemRec::setQoh(int newQoh) {
    if (newQoh >= 0) {
        qoh = newQoh;
    }
}
