#include "ClassRoll.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
/**
 * Name: Emanuel Dobra
 * Specification file for ClassRoll
*/

int main() {
    ClassRoll studentRecords("student.dat", 10);
    cout << studentRecords.getNoStudents();
}