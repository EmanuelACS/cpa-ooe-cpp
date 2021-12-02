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
        void addAnimalFirst(string /*animal*/, int /*qty*/);
        void showList(ostream& /*output*/) const;

    private:
        SpaceStation* firstPtr;

};