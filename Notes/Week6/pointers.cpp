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

}