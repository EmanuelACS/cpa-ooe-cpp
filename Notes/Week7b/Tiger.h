#include "Feline.h"

// spec file for tiger class

class Tiger : public Feline {
    public:
        void setStripePattern(string /*strpePattern*/);
        string getStriplePattern() const { return *stripePattern; }
        void petCat(ostream& /*file or console*/) const;
        Tiger();
    private:
        string* stripePattern;
};