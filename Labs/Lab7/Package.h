#include <iostream>
#include <string>
#include <cassert>
using namespace std;

// spec file for Package class

class Package {
    public:
        Package();
        Package(string /*source*/, string /*destination*/);
        double computeShipCost() const { return 0.0; }
        string getSource() const { return *source; }
        string getDestination() const { return *destination; }
    private:
        string* source;
        string* destination;
};