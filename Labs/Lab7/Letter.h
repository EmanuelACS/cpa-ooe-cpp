#include "Package.h"

// Emanuel Dobra
// 2021-11-03
// sepc file for Letter class

class Letter : public Package {
    public:
        Letter();  
        Letter(int /*noPages*/, string /*source*/, string /*destination*/);
        double computeShipCost() const;
        int getnoPages() { return noPages; }
    private:
        int noPages; 
};