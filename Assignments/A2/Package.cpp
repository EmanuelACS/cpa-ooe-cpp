#include "Package.h"
#include <iostream>

// Emanuel Dobra
// 2021-11-21
// Impl file for Package class

// Package default constructor, asks user to input data
Package::Package() {
    // Allocate memory on the heap 
    source = new string();
    assert(source);
    destination = new string();
    assert(destination);

    // Get valid source input
    cout << "Enter package source: ";
    getline(cin, *source);
    while(*source == "") {
        cout << "Invalid input, try again: ";
        getline(cin, *source);
    }

    // Get valid destination input
    cout << "Enter package destination: ";
    getline(cin, *destination);
    while(*destination == "") {
        cout << "Invalid input, try again: ";
        getline(cin, *destination);
    }
}

// Letter default constructor, asks user to input data
Letter::Letter() {
    // Get valid noPages input
    cout << "Enter total pages letter has: ";
    cin >> noPages;
    while (cin.fail() || noPages < 1) {
        cin.clear();
        cin.ignore(80, '\n');
        cout << "Invalid input, try again: ";
        cin >> noPages;
    }
    cin.clear();
    cin.ignore(80, '\n');
}

// Box default constructor, asks user to input data
Box::Box() {
    cout << "Enter weight: ";
    cin >> weight;
    while (cin.fail() || weight < 1) {
        cin.clear();
        cin.ignore(80, '\n');
        cout << "Invalid input, try again: ";\
        cin >> weight;
    }
    cin.clear();
    cin.ignore(80, '\n');
}

// Non-default Package constructor, takes in source and destination params 
Package::Package(string newSource, string newDestination) {
    // Allocate memory on the heap and store needed data 
    source = newSource.empty() ? new string("Invalid Source")
        :new string(newSource);
    assert(source);
    destination = newDestination.empty() ? new string("Invalid Destination") 
        : new string(newDestination);
    assert(destination);
}

// Non-default Letter constructor, takes in source, destination and noPages params 
Letter::Letter(int newNoPages, string newSource, string newDestination) : Package(newSource, newDestination) {
    noPages = newNoPages < 0 ? 0 : newNoPages;
}

// Non-default Box constructor, takes in source, destination and weight params 
Box::Box(int newWeight, string newSource, string newDestination) : Package(newSource, newDestination) {
    weight = newWeight < 0 ? 0 : newWeight;
}

// Computes ship cost for letters based on noPages
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

// Computes ship cost for Boxes based on weight
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

// Deallocate memory used
Package::~Package() {
    delete source, destination;
}