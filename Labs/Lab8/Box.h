#include "Package.h"

// Emanuel Dobra
// 2021-11-03
// spec file for Box class

class Box : public Package {
    public:
        Box();
        Box(int /*weight*/, string /*source*/, string /*destination*/);
        double computeShipCost() const;
        int getWeight() const { return weight; }
    private:
        int weight;
};