#include <string>
#include <iostream>
using namespace std;

/*
    Specification file for ItemRec (header file)
    Name: 
*/

class ItemRec {
    public: 
        void printItem(ostream&) const;
        void setItem(int, string, int);
        string determineAvailable(int) const;
        string getDescription() const { return description; }
        int getItemCode() const { return itemCode; }

    private:
        int itemCode;
        string description;
        int qoh;
};
