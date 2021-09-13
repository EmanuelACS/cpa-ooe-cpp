#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct Date
{
    int year;
    string month;
    int day;
};

struct StudentRec
{
    string name;
    Date birth;
    int grades[3];
};

StudentRec getStud();
void printStudentName(string name);
void updateStudent(StudentRec& stud);

int main() {
    StudentRec pupil;
    pupil = getStud();
    printStudentName(pupil.name);
    updateStudent(pupil);
    printStudentName(pupil.name);
}

StudentRec getStud() {
    StudentRec stud;
    cout << "enter a name: ";
    getline(cin, stud.name);
    cout << "enter 3 grades: ";
    cin >> stud.grades[0] >> stud.grades[1] >> stud.grades[2];
    cout << "enter birthdate: ";
    cout << "enter year: ";
    cin >> stud.birth.year;
    cout << "enter month: ";
    cin.ignore(80, '\n');
    getline(cin, stud.birth.month);
    cin >> stud.birth.day;
    return stud;
}

void printStudentName(string name) {
    cout << "Student name is: " << name << endl;
}

void updateStudent(StudentRec& stud) {
    cout << "enter a new name for the student: ";
    cin.ignore(80, '/n');
    getline(cin, stud.name);
}