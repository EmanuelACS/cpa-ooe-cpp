//include preprocessor directive
#include "Room.h"
#include <cassert>

//client code


// run time memory for the heap
// compile memory for the stack
// at compile time information known cannot be changed
// so it gets binded
// virtual bypassed that
// dynamic binding: you can change what the object is representing
// by binding it at runtime


void show(const Room* roomPtr)
{
	cout << "inside show functio " << endl;
	roomPtr->showInfo(cout);
	delete roomPtr;
}



void createStack()
{
	cout << endl << endl << "Creating office on the stack" << endl;
	Office bank(5, 6, "Kingston");

}

void createHeap()
{
	cout << endl << endl << "Creating office on the heap" << endl;
	Office* school = new Office(8, 45, "Ottawa");
	assert(school);
	//delete school;
}



int main()
{

	createStack();
	createHeap();
	cout << endl << "Creating a Room Object on the heap " << endl;
	Room* closet = new Room(30, "01050");
	assert(closet);
	//closet->showInfo(cout);
	show(closet);
	//delete closet;
	
	cout << endl << endl << "Creating an Office object on the heap " << endl;
	Office* colinOffice = new Office(50, 1, "Kingston");
	assert(colinOffice);
	//colinOffice->showInfo(cout);
	show(colinOffice);



	system("pause");
}

// For the test:
// Call base constructor before derived constructor