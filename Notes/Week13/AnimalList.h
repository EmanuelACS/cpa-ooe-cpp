#include <iostream>
#include <string>
#include <cassert>
using namespace std;

struct SpaceStation {
    string animal;
    int qty;
    SpaceStation* link;
};

class AnimalList {
    public:
        AnimalList();


    private:
        SpaceStation* firstPtr;

};