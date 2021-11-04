#include "Package.h"
#include "Box.h"
#include "Letter.h"

void validate(string* origin, string newString) {
    origin = (!newString.empty()) ? new string(newString) 
        : new string("NO NAME");
    assert(origin);
}

Package::Package(string newSource, string newDestination) {
    source = (!newSource.empty()) ? new string(newSource) 
        : new string("NO NAME");
    assert(source);
    destination = (!newDestination.empty()) ? new string(newDestination) 
        : new string("NO NAME");
    assert(source);
}

Package::~Package() {
    delete source, destination;
}

Letter::Letter(int newNoPages, string newSource, string newDestination) {
    noPages = (newNoPages > 0) ? newNoPages : 0;
    validate(source, newSource);
    validate(destination, newDestination);
}

Box::Box(int newWeight, string newSource, string newDestination) {
    weight = (newWeight > 0) ? newWeight : 0;
    validate(source, newSource);
    validate(destination, newDestination);
}