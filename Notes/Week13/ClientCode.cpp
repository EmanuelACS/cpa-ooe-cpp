#include "AnimalList.h"

int main() {
    AnimalList* ptr = new AnimalList;
    assert(ptr);
    ptr->addAnimalFirst("cat", 10);
    ptr->addAnimalFirst("lemur", 15);
    ptr->showList(cout);
}