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
        void show() const;

        // destructor, cannot be overloaded, only one allowed
        // automatically called when the object goes out of existance
        // a default one is generated for us. 
        ~Drink(); //destructor 
        // when you call delete() it calls the destructor

    private:
        int qty;
        string* typeOfDrink;
};