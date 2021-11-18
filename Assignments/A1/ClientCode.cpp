#include "ClassRoll.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
 * Name: Emanuel Dobra
 * Date: 2021-10-17
 * Client Code using ClassRoll
 * Designed to maintain information on each enrolled student
 * for any teacher's courses.
*/

// Show course name and # of students for a course object
void showCourse(ClassRoll courseData) {
    cout << "\nCourse Name: " << courseData.getCourseName() << "\n"
        << "Number of students: " << courseData.getNoStudents() << "\n";
}

int main()
{
    cout << "ClassRoll object examples for student.data file:" << endl << endl;
    ClassRoll comp333("student.data", "OOP C++", 3);
    cout << "Number of students in COMP 333 = " << comp333.getNoStudents() << endl;
    cout << "printing all students in student.data to the screenscreen:\n\n";
    comp333.writeStudents(cout);
    cout << "\nLooking up student T. Jones:\n";
    comp333.showGrade("T. Jones"); //should be in student.data, if not add it
    cout << "\nChange grade for T. Jones to a B\n\n";
    comp333.changeGrade("T. Jones", 'B');
    cout << "show T. Jones grade changed \n";
    comp333.showGrade("T. Jones");
    cout << "\nChange grade for T. Jones to a M\n\n";
    comp333.changeGrade("T. Jones", 'M');
    cout << "show non existant student\n";
    comp333.showGrade("Colin");
    cout << "printing all students in student.data again\n\n";
    comp333.writeStudents(cout);
    cout << "\n\ncalling your show course function:";
    showCourse(comp333);
    cout << "\n\n\nEmpty object examples from default.data file" << endl << endl;
    ClassRoll noclass("default.data","No Class"); //empty file
    cout << "Number of students = " << noclass.getNoStudents() << endl << endl;
    cout << "\n\nbestClass object examples" << endl << endl;
    ClassRoll bestClass("fullclass.data", "poker");
    bestClass.writeStudents(cout);
    cout << "Number of students in " << bestClass.getCourseName()
    << ": " << bestClass.getNoStudents() << endl << endl;
    bestClass.writeStudents(cout);
    bestClass.showGrade("Superman");
    cout << "write to a file \n";
    ofstream fout("sample.dat");
    if (!fout.is_open()) {
        cout << "error opening saple.dat file " << endl;
        system("pause");
        exit(1);
    }
    bestClass.writeStudents(fout);
    cout << "\n\ncalling your show course function:";
    cout << "\n\ncalling your show course function:";
    showCourse(bestClass);

    system("type sample.dat");
    system("pause");
}
/* Output
ClassRoll object examples for student.data file:

Number of students in COMP 333 = 3
printing all students in student.data to the screenscreen:

Student Name:                         Assign Total          Test Total               Grade

J. Doe                                          50                 290                   A
P. Smith                                        45                 190                   D
T. Jones                                        50                 100                   F

Number of Students: 3


Looking up student T. Jones:
Grade: F

Change grade for T. Jones to a B

show T. Jones grade changed
Grade: B

Change grade for T. Jones to a M

Error405: Grade M is invalid
show non existant student
Error403: Could not find student Colin
printing all students in student.data again

Student Name:                         Assign Total          Test Total               Grade

J. Doe                                          50                 290                   A
P. Smith                                        45                 190                   D
T. Jones                                        50                 100                   B

Number of Students: 3



calling your show course function:
Course Name: OOP C++
Number of students: 3



Empty object examples from default.data file

Number of students = 0



bestClass object examples

Student Name:                         Assign Total          Test Total               Grade

J. Doe                                          50                 290                   A
P. Smith                                        45                 190                   D
T. Jones                                        50                 100                   F
Superman                                        23                 140                   C

Number of Students: 4

Number of students in poker: 4

Student Name:                         Assign Total          Test Total               Grade

J. Doe                                          50                 290                   A
P. Smith                                        45                 190                   D
T. Jones                                        50                 100                   F
Superman                                        23                 140                   C

Number of Students: 4

Grade: C
write to a file


calling your show course function:

calling your show course function:
Course Name: poker
Number of students: 4
Press any key to continue . . .
*/