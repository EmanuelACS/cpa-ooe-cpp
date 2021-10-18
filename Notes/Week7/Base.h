#include <iostream>
#include <cassert>

using namespace std;
// Specification file for Base class

class Base
{
public:
    void setNumb(int /*numb*/);
    int getNumb() const { return numb; }
    void show(ostream& /*file or console*/) const;
    string getDesc() const { return *desc; }
    void setDesc(string /*desc*/);
    Base();
private:
    int numb;
    string* desc;
};
