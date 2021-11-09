#include "Room.h"
#include <cassert>

//implementation files

Room::Room()
{
	cout   << "inside Room default constructor " << endl ;
	// allow user input for location (allocate memory on the heap)
	// ensure the string is not empty 
	location = new string;
	assert(location); //ensures memory was allocated
	cout << "enter a location ";
	getline(cin, *location);
	while (location->length() ==0)
	{
		cout << "error, location must be input, please re-enter ";
		getline(cin, *location);
	}

	//allow user input for sqFt
	// ensure sqFt is between 0 and 10000
	cout << "enter square footage ";
	cin >> sqFt;
	while (cin.fail() || sqFt < 0 || sqFt >10000)
	{
		cin.clear();
		cin.ignore(80, '\n');
		cout << "error must be between 0 and 10000, re-enter ";
		cin >> sqFt;
	}
	cin.ignore(80, '\n');
}
Room::Room(int newSqFt, string newLocation)
{
	cout << "inside Room non-default constructor " << endl;
	sqFt = (newSqFt < 0 || newSqFt > 10000) ? 0 : newSqFt;
	location = new string(newLocation.length()==0 ? "No Location" : newLocation);
	assert(location != NULL);

}
//create a destructor for the Room class
Room::~Room()
{
	cout << "inside room destructor" << endl;
	delete location;
}


void Room::showInfo(ostream& out) const
{
	out << "Inside Room showInfo " << endl;
	out << "Room at " << *location << " has " << sqFt << " square feet\n";
}

Office::Office()
{

	//get user input for number of windows
	// ensure value is between 0 and 1000
	cout  << "Inside office default constructor " << endl;
	noWindows = new int;
	assert(noWindows != 0);
	cout << "enter number of windows ";
	cin >> *noWindows;
	while (cin.fail() || *noWindows < 0 || *noWindows >1000)
	{
		cin.clear();
		cin.ignore(80, '\n');
		cout << "number of windows must be 0-1000, re-enter ";
		cin >> *noWindows;
	}
	cin.ignore(80, '\n');
}

//write the non-default constructor for the Office Class
Office::Office(int newSqFt, int newNoWindows, string newLocation)
	:Room( newSqFt,  newLocation)
{
	cout   << "Inside Office non-default constructor " << endl;
	noWindows = new int(newNoWindows < 0 || newNoWindows > 1000 ? 0 : newNoWindows);
	assert(noWindows);

}
//create a destructor for the Ofice Class
Office::~Office()
{
	cout  << "Inside Office destructor "  << endl;
	delete noWindows;
}

void Office::showInfo(ostream& out) const
{
	//print off all variable members
	out << "inside office showInfo " << endl;
	Room::showInfo(out);
	out << "windows is " << *noWindows << endl;

}


Classroom::Classroom(int newNoDesks, int newSqFt, string newLocation)
	: Room(newSqFt, newLocation) {
		cout << "Inside Classroom non-default constructor " << endl;
		noDesks = new int((newNoDesks>0)?newNoDesks : 1);
		assert(noDesks);
}

Classroom :: ~Classroom() {
	cout << "Inside Classroom destructor" << endl;
	delete noDesks;
}

void Classroom::showInfo(ostream& out) {
	cout << "This is a virtual classroom." << endl;
}