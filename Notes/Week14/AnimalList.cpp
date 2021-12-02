#include "AnimalList.h"
#include <iomanip>

//implementation file for AnimalList

AnimalList::AnimalList() 
{
	firstPtr = NULL;
}

//add a node to the beginning of the list

/* Pseudocode
*  1. build a new space station on the heap and populate
*  2.  make new space stations link point to the first node
*  3. make the first pointer point to the new node
* 
*/
void AnimalList::addAnimalFirst(string newAnimal, int newQty)
{
	SpaceStation* builder = new SpaceStation; // build new space station
	assert(builder);
	builder -> animal = newAnimal;
	builder->qty = newQty;
	builder->link = firstPtr;  // add node to beginning of list
	firstPtr = builder;  // have list point to the new node


}

//display information about each node of our linked list, in order

/*PseduoCode
* 
* 1. check if linked list is null
*  if not null.
* 2. create a space station pointer to walk through the linked list
* 3. stop when link is equal to null

*/

void AnimalList::showList(ostream& out) const
{
	if (firstPtr == NULL)
		out << "there are no space stations....yet" << endl << endl;
	else
	{
		SpaceStation* walker = firstPtr;
		while (walker != NULL)
		{
			out << walker->animal << " " << walker->qty << endl;
			walker = walker->link;
		}
	}
}

//add a node to the end of the list
/* pseudocode
    1. build a new spacestation (node) and populate 
	2. if list is empty have firstPtr point to our new spacestation (node)
	3. create a walker and assign to firstPtr
	4.walk to end of the list by checking walkers link
	5. assign walker to the new spacestation (node)
*/
void AnimalList::addAnimalEnd(string newAnimal, int newQty)
{
	//build statation
	SpaceStation* builder = new SpaceStation;
	assert(builder != 0);
	//populate the new spacestation
	builder->animal = newAnimal;
	builder->qty = newQty;
	builder->link = NULL;
	//if list is empty
	if (firstPtr == NULL)
		firstPtr = builder; // add spacestation as first
	else
	{
		SpaceStation* walker = firstPtr; // create a walker and assign to first node
		while (walker->link != NULL)
		{
			walker = walker->link;
		}
		walker->link = builder;

	}
}

// counts the number of spacestations (nodes) in our list
/* pseudocode
 1. check if list is emty, if empty return 0
 2. declare a counter variable, initialize to 0;
 3. Create a walker (spacestation pointer), initialize to the first spacestation
 4. walk through the list until walker is null (use while loop)
 5. increment counter variable for each node that we see
 6. return counter varialbe

*/

int AnimalList::countSpaceStations() const
{

	int counter = 0;
	SpaceStation* walker = firstPtr;
	while (walker != NULL)
	{
		counter++;
		walker = walker->link;
	
	}
	return counter;
}

// returns a spacestation pointer which contatins a specific animal
// if return null then we didn't find animal or the list is empty
/*  pseudocode
    1. create a walker (pointer to a spacation (node)) and assign to firstPtr
	2. walk through each node until we find the node which contains a specific animal
	3. return walker

*/

SpaceStation* AnimalList::findAnimal(string type) const
{
	SpaceStation* walker = firstPtr;
	while (walker != NULL)
	{
		if (walker->animal == type)
			break;
		walker = walker->link; // move to next node
	}
	return walker;
}

/*
adds a spacestation to the end of our list or add animals to an existing node node

psuedocode
1. create a walker spacestation ptr and point to firstPtr
2. create a walker spacestation, should be 1 node behind walker always
3. walk through the linked list until you find the spacestation that contains the animal
3. add the newQty to walker qty.
4. if animal type is never found then walker would be equal null
	a. builde spacestation
	b. stalker point to the new spacestation
*/
void AnimalList::insertOrAddAnimals(string type, int newQty)
{
	SpaceStation* walker = firstPtr, *stalker = NULL;
	while (walker != NULL)
	{
		if (walker->animal == type) {
			walker->qty += newQty;
			break;
		}
		stalker = walker;
		walker = walker->link;
	}
	if (walker==NULL) { // we never found animal
		SpaceStation* builder = new SpaceStation;
		assert(builder);
		builder->animal=type;
		builder->qty=newQty;
		builder->link = NULL;
		if (stalker != NULL) {
			stalker->link = builder;
		} else {
			firstPtr = builder;
		}
	}
}

/* Remove an animal, 4 diff scenarios:
 - empty list
 - node not found
 - delete first node 
 - delete anywhere else
CODE:
2. create a wlaker and point it at firstptr
3. create a stalker and point it NULL
4. walk the walker through the list looking for animal type
	if animal type if found break out of while loop
5. if walker is null, we never found animal, tell user,
6. if we found animal type
	a. assign stalker link to walker link
	b. delete walker 
*/
void AnimalList::removeAnimal(string type) {

}