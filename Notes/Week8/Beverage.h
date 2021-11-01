#include "Drink.h"

//spec file for beverage class

class Beverage : public Drink {
    public:
        Beverage();
        Beverage(int /*qty*/, string /*typeOfDrink*/, string /*mix*/);
        string getMix() const { return *mix; };
        void setMix(string /*newMix*/);
        //void show() const;
    private: 
        string* mix;            
};