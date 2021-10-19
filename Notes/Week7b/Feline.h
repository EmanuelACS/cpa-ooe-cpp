#include <iostream>
#include <string>
#include <cassert>
using namespace std;

// sepc file for feline class

class Feline {
    public:
        string getName() const { return *name; }
        void setName(string /*name*/);
        int getNumLegs() const { return numLegs; }
        void setNumbLegs(int /*numLegs*/);
        void petCat(ostream& /*file or console*/) const;
        Feline();
    private:
        int numLegs;
        string* name; // location in memory that cna hold a string
};