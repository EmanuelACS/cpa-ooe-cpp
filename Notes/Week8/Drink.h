#include <iostream>
#include <string>
#include <cassert> 
using namespace std;

class Drink {
    public:
        Drink();
        Drink(int /*ounces*/, string /*type*/);
        int getQty() const { return qty; }
        string getTypeOfDrink() const { return *typeOfDrink; }
        void setQty(int /*ounces*/);
        void setTypeOfDrink(string /*type*/); 
        //void show() const;
    private:
        int qty;
        string* typeOfDrink;
};