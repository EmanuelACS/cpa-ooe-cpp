#include "Package.h"

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

Letter::Letter(int newNoPages, string newSource, string newDestination) : Package(newSource, newDestination) {
    noPages = (newNoPages > 0) ? newNoPages : 0;
}

Box::Box(int newWeight, string newSource, string newDestination) : Package(newSource, newDestination) {
    weight = (newWeight > 0) ? newWeight : 0;
}