#include <iostream>
#include <string>
using namespace std;
//virtual functions

//specification files

class Room     	//base				
{
public:
	string* location;
	int sqFt;
public:
	Room(int/*sq ft*/, string/*location*/);
	Room();
	//write the destructor prototype
	// virtual ~Room();
	virtual ~Room();
	
	int getsqFt() const { return sqFt; }
	string getlocation() { return *location; }
	//	virtual void showInfo(ostream&) const;
	virtual void showInfo(ostream&) const;

};
class Office :public Room   //derived
{
	int* noWindows;
public:
	Office(int/*sq ft*/, int/*windows*/, string/*location*/);
	Office();
	// write the destructor prototype
	~Office();
	//write a showInfo function
	void showInfo(ostream&) const;

};
class Classroom : public Room {
	private: 
		int* noDesks;
	public: 
		~Classroom();
		Classroom(int /*noDesks*/, int /*sqFeet*/, string /*location*/);
};
