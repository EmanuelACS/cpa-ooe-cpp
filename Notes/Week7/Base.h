#include <iostream>

using namespace std;
// Specification file for Base class

class Base
{
public:
    void setNumb(int /*numb*/);
    int getNumb() const { return numb; }
    void show(ostream& /*file or console*/) const;
    Base();
private:
    int numb;
};
