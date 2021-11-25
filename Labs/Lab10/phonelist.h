#include <iostream>
#include <string>
using namespace std;

// Emanuel Dobra
// 2021-11-25
// spec file for PhoneList

struct Directory {
    string name;
    int areaCode;
    int phoneNo;
    Directory* link;
};

class PhoneList { 
    public: 
        PhoneList(string /*title*/);
        ~PhoneList();
        void showList(ostream& /*fout*/) const;
        void addDirectory(string /*name*/, int /*areaCode*/, int /*phoneNo*/);
        void removeDirectory(string /*name*/);
        int getNoDirectories() const { return numDirs; }
        string getTitle() const { return title; }

    private: 
        Directory* firstPtr;
        string title; 
        int numDirs;
};