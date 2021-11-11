#include "Package.h"

// Impl file for Package class

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

double Letter::computeShipCost() const {
    double shipCost = 0;
    if (noPages > 0 && noPages < 6) {
        shipCost = .45;
    } else if (noPages > 5 && noPages < 21) {
        shipCost = .70;
    } else if (noPages > 20 && noPages < 86) {
        shipCost = 1.35;
    } else if (noPages > 85) {
        shipCost = 2.89;
    }
    return shipCost;
}

double Box::computeShipCost() const {
    double shipCost = 0;
    if (weight > 0 && weight < 5) {
        shipCost = .79;
    } else if (weight >= 5 && weight <= 15) {
        shipCost = 2.75;
    } else if (weight > 15) {
        shipCost = 4.75;
    }
    return shipCost;
}
