#include "Room.h"
#include <cassert>

//implementation files

Room::Room()
{
    cout << "\n\nInside default room constructor.\n\n";
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
    cout << "\n\nInside non-default room constructor.\n\n";
    sqFt = (newSqFt < 0 || newSqFt > 1000) ? 0 : newSqFt;
    location = new string((newLocation.length() == 0) ? "No location" : newLocation);
    assert(location != NULL);
	//ensure values are valid

}

//create a destructor for the Room class
Room::~Room() {
    cout << "\n\nInside room destructor.\n\n";
    delete location;
}

void Room::showInfo(ostream& out) const
{
	out << "Room at " << *location << " has " << sqFt << " square feet\n";
}

Office::Office()
{
    cout << "\n\nInside default office constructor.\n\n";
	//get user input for number of windows
	// ensure value is between 0 and 1000
    noWindows = new int;
    assert(noWindows != 0);
    cout << "Enter number of windows ";
    cin >> *noWindows;
    while (cin.fail() || *noWindows < 0 || *noWindows > 1000) {
        cin.clear();
        cin.ignore(80, '\n');
        cout << "Number of windows must be 0-1000: ";
        cin >> *noWindows;
    }
    cin.ignore(80, '\n');
}

//write the non-default constructor for the Office Class
Office::Office(int newSqFt, int newNoWindows, string newLocation) : Room(newSqFt, newLocation) {
    cout << "\n\nInside non-default office constructor.\n\n";
    noWindows = new int(newNoWindows < 0 || newNoWindows > 1000 ? 0 : newNoWindows);
    assert(noWindows);
}

//create a destructor for the Ofice Class
Office::~Office() {
    cout << "\n\nInside office destructor.\n\n";
    delete noWindows;
}

void Office::showInfo(ostream& out) const
{
	//print off all variable members
    Room::showInfo(out);
    out << "sq ft: " << *noWindows << endl;
}
