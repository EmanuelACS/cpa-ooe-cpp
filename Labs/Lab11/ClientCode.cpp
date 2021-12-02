#include "PhoneList.h"

int main() {
    PhoneList* friends = new PhoneList("Title"); 
    cout << "Title: " << friends->getTitle() << endl;
    friends->showList(cout);
}