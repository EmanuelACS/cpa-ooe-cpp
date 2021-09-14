#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct Employee {
    int empID;
    string name;
    double salary;
};

const int SIZE = 5;

int addEmployee(Employee emps[]);

int main() {
    Employee empArray[SIZE];
    int numEmployees = addEmployee(empArray);
    ofstream fout("employee.dat");
    if (!fout.is_open()) {
        cout << "failed to open employee.dat";
        system("pause");
        exit(1);
    }
    int highestIndex = 0;
    for (int index = 1; index < numEmployees; index++) {
        if (empArray[index].salary > highestIndex) {
            highestIndex = index;
        }
    }
    fout << "Highest Salary: " << empArray[highestIndex].name << " = " << empArray[highestIndex].salary << endl;
    system("type employee.dat");
}

int addEmployee(Employee emps[]) {
    int length = 0;
    for (; length < SIZE; length++) {
        cout << "Enter employee id or ^z to exit: ";
        cin >> emps[length].empID;
        if (cin.eof()) {
            break;
        }
        cin.ignore(80, '\n');
        cout << "Enter employee name: ";
        getline(cin, emps[length].name);
        cout << "Enter employee salary";
        cin >> emps[length].salary;
    }
    return length;
}