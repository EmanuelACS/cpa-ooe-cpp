#include "Room.h"
#include <cassert>

//implementation files

Room::Room()
{

	// allow user input for location (allocate memory on the heap)
	// ensure the string is not empty 
    location = new string;
    assert(location);
    cout << "Enter location: ";
    getline(cin, *location);

    // or ((*location).length() == 0)
    while (location->length() == 0) {
        cout << "Error, location must be entered: ";
        getline(cin, *location);
    }

	//allow user input for sqFt
	// ensure sqFt is between 0 and 10000
    cout << "Enter square ft: ";
    cin >> sqFt;
    while (cin.fail() || sqFt < 0 || sqFt > 10000) {
        cin.clear(); // dealing with a string
        cin.ignore(80, '\n');
        cout << "Error: must be between 0 and 10000: ";
    }
    cin.ignore(80, '\n');
}
Room::Room(int newSqFt, string newLocation)
{
    sqFt = (newSqFt < 0 || newSqFt > 1000) ? 0 : newSqFt;
    location = new string((newLocation.length() == 0) ? "No location" : newLocation);
	//ensure values are valid

}
//create a destructor for the Room class

void Room::showInfo(ostream& out) const
{
	out << "Room at " << *location << " has " << sqFt << " square feet\n";
}

Office::Office()
{

	//get user input for number of windows
	// ensure value is between 0 and 1000
}

//write the non-default constructor for the Office Class


//create a destructor for the Ofice Class

void Office::showInfo(ostream& out) const
{
	//print off all variable members

}
