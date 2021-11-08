//include preprocessor directive
#include "Room.h"
#include <cassert>

//client code


/*

	write a void function called "show" which accepts has a room object passed to it.
	Use a pointer in the parameter list to allow for dynamic memory
*   call the passed objects showInfo function.
* 
* 
*/

// have to make destructor also virtual
// since this is a room obj function
void show(const Room* roomPtr) {
    cout << "\n\nInside const show function\n\n";
    roomPtr->showInfo(cout);
    delete roomPtr; // last step
}


/*
	Write a void function which has no parameter list
	Declare an initialize an Office object on the stack
*/
void createStack() {
    cout << "\n\nCreating bank on the heap\n\n";
    Office bank(5, 6, "Kingston");
}

/*
	Write a void function which has no parameter list
	Declare an initialize an Office Object on the heap
*/
void createHeap() {
    cout << "\n\nCreating office on the heap\n\n";
    Office* school = new Office(8, 45, "Ottawa");
    assert(school);
    delete school; // calls destructor since memory is deallocated
    //    Office bank(5, 6, "kingston");
}

int main()
{
    //createStack();
    //createHeap();

	//create 2 objects on the stack, one Room and one Office
    Room *cabin = new Room(120, "01050");
    assert(cabin);
    show(cabin);
    //cabin->showInfo(cout);
    //delete cabin;

    Office *myOffice = new Office(300, 2, "Kingston");
    assert(myOffice);
    show(myOffice);
    //myOffice->showInfo(cout);
    //delete myOffice;

	//call the "show" function for each object 

	//create 2 objects on the heap, one Room and one Office.

    //call the "show" function for each object 


	system("pause");
}