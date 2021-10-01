#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
/**
 * Name: Emanuel Dobra
 * Specification file for ClassRoll
*/

struct StudentRec {
    string studentName;
    int assignmentTotal;
    int testTotal;
    char letterGrade;
};


const int SIZE = 25;

class ClassRoll {
    public: 
        void showGrade(string /*studentName*/) const; // Displays a student's grade
        int getNoStudents() const { return noStudents; } // Returns the amount of students in array
        string getCourseName() const { return courseName; } // Returns name of the course
        void changeGrade(string /*studentName*/, char /*letterGrade*/); // Change a student's grade
        void writeStudents(ostream&) const; // Write all of the students to an output file or screen 
        ClassRoll(string /*fileName*/, int /*maxStudents*/);

    private:
        string courseName;
        int maxStudents;
        int noStudents;
        StudentRec students[SIZE];
        int searchStudent(string /*studentName*/) const { return studentIndex; } // Returns the index of the student in the students array
};

