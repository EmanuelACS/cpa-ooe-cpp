#include "Base.h"
#include <cassert>
#include "Derived.h"

int main() {
    Base baseStack;
    baseStack.show(cout);
    Base* baseHeap = new Base;
    Base* baseHeap2;
    baseHeap2 = new Base;
    assert(baseHeap);
    assert(baseHeap2);
    baseHeap->show(cout); // use arrow instead of . to access members
    delete baseHeap, baseHeap2;
    // arrow says lets look at the value

    Derived* derivedHeap = new Derived;
    assert(derivedHeap != NULL);
    derivedHeap->setBoth(5, 25);
    derivedHeap->show(cout);
    delete derivedHeap;
}