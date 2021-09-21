#include "ItemRec.h"


//Client code for Module 3 in class exercise (ItemRec)
// COMP333- Colin Graves

/* Complete the following tasks:
 	1.Declare a variable of type ItemTracking called penTrack and assign a unique itemCode and section.
	2.Declare an object of type ItemRec called person
	3.Call the setItem function passing penTrack for itemTrack and hard coded values for the rest
	4.Write the statements that will print the the information about the ItemRec to the console
	*/

int main()
{
    ItemTracking penTrack = { 1, "stationary" };
    ItemRec pen;
    pen.setItem(penTrack, "Writes", 500);
    pen.printItem(cout);
		

	system("pause");
}