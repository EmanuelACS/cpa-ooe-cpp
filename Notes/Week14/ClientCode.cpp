#include "AnimalList.h"

//client code

int main()
{
	AnimalList* ptr = new AnimalList;
	assert(ptr);
	ptr->addAnimalFirst("cat", 9);
	ptr->addAnimalFirst("Lemur", 14);
	ptr->addAnimalEnd("Raccoon", 47);
	ptr->addMoreAnimals("cat", 5);
	ptr->showList(cout);
	cout << "number of space stations is " << ptr->countSpaceStations() << endl;
	SpaceStation* findPtr = ptr->findAnimal("dog");
	if (findPtr != NULL)
		cout << "There are " << findPtr->qty << " dogs" << endl;
	else
		cout << "there are no dogs" << endl;

	system("pause");
}