#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// specification file for animal List - intro to linked lists

struct SpaceStation
{
	string animal;
	int qty;
	SpaceStation* link;
};

class AnimalList
{
public:
	AnimalList();
	void addAnimalFirst(string /*animal*/, int /*qty*/);
	void addAnimalEnd(string /*animal*/, int /*qty*/);
	void showList(ostream& /*output*/) const;
	int countSpaceStations() const;
	SpaceStation* findAnimal(string /*animal*/) const;
	void insertOrAddAnimals(string /*animal*/, int /*newqty*/);
	void removeAnimal(string /*animal*/);

private:
	SpaceStation* firstPtr;

};