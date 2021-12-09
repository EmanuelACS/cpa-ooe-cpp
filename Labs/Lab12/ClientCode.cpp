#include "PhoneList.h"

int main() {
    PhoneList* friends = new PhoneList("Friend List"); 
    cout << "Title: " << friends->getTitle() << endl;
    friends->showList(cout);
}