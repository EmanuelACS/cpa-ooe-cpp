#include "Base.h"

// spec file for derived


class Derived: public Base //, public base2, public base3...
{
    public:
        void setValue(int /*value*/);
        int getValue() const { return value; }
        void setBoth(int /*numb*/, int /*value*/);
        void show(ostream& /*file or console*/) const;
        Derived();
    
    private: 
        int value;
        //int numb;
};