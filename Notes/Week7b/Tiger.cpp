#include "Tiger.h"

Tiger::Tiger() {
    cout << "inside default constr for tiger class\n";
    // new keyword means we're dealing with dynamic memory
    stripePattern = new string("Tiger1");
    assert(stripePattern);
};

void Tiger::setStripePattern(string newStripePattern) {
    *stripePattern = newStripePattern;
}

void Tiger::petCat(ostream& out) const {
    out << getName() << "bites you\n";
}
