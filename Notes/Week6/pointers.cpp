#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main() {
    int *intPtr;
    int numb(10);
    intPtr = &numb;

    cout << "numbs value is " << numb << " and has an address of " << &numb << endl; 
    cout << "intPtr has a value of " << *intPtr << " and has a value of " << intPtr << endl;

    *intPtr += 20; // add 20 to numb
    cout << "numbs value is now " << numb << endl;

    // point to any location in memory that can hold an int
    // allocates runtime memory (heap memory) for an int
    int* heapIntPtr = new int(50);  // set value to 50
    // memory continues to be reserved until unallocated if declared in a function
    // since it is runtime memory
    
    // first thing is to make sure we have enough memory when declaring heap memory
    assert(heapIntPtr != NULL); // ensures memory was allocated
    cout << "heapIntPtr has a value of " << *heapIntPtr << endl;
    delete heapIntPtr; // frees up run time memory (which was allocated on the heap)

    // pointer of different types on the heap
    char* charPtr = new char('z');
    assert(charPtr); // also works
    cout << "charPtr has a value of " << *charPtr << endl;
    delete charPtr; 

    string*  descPtr = new string;
    assert(descPtr != 0); // also works
    *descPtr = "testing";
    cout << "descPtr has a value of " << *descPtr << endl;  
    delete descPtr;

    int* arrPtr = new int[5]; // create array on the heap of size 5
    assert(arrPtr);
    int* pointToArrPtr = arrPtr; // points to arrPtr[0]
    arrPtr[0] = 49;
    arrPtr[1] = 99;
    cout << arrPtr[0] << " - " << arrPtr[1] << endl; 
    pointToArrPtr++; // points to arrPtr[1] now
    cout << *pointToArrPtr << endl; // 
    delete []arrPtr; // deallocate array memory
    // deletes all elements in the array
    // There is no need to delete pointToArrPtr since the memory of arrPtr is already deleted.
    // delete []pointToArrPtr; 
    
    
}