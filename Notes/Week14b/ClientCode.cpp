#include "Date.h"

// client code for Date project

int main() {
    Date myDate(2021, 5, 6);
    Date myDate2(2022, 11, 25);

    myDate.showDate(cout);
    myDate2.showDate(cout);
}