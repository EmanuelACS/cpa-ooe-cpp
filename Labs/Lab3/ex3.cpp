#include "ClassRoll.h"
using namespace std;
/**
 * Name: Emanuel Dobra
 * Client Code
*/

int main() {
    ClassRoll studentRecords("student.dat", 10);
    cout << studentRecords.getNoStudents();
}