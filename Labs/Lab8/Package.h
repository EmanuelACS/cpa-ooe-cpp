#include <iostream>
#include <string>
#include <cassert>
using namespace std;

// Emanuel Dobra
// 2021-11-03
// spec file for Package class

class Package {
    public:
        Package();
        Package(string /*source*/, string /*destination*/);
        ~Package();
        double computeShipCost() const { return 0.0; }
        string getSource() const { return *source; }
        string getDestination() const { return *destination; }
    protected:
        string* source;
        string* destination;
};