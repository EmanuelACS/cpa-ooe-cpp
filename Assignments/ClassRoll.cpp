#include "ClassRoll.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
/**
 * Name: Emanuel Dobra
 * Date: 2021-10-17
 * Implementation file for ClassRoll
*/

// Search for a specific student in a StudentRec structure
// Return that student's index if found,
// otherwise return the array length
int ClassRoll::searchStudent(string studentName) const {
    int studentFound, studentIdx = 0;  
    // Search for studentName
    for (; studentIdx < noStudents; studentIdx++) {
        if (students[studentIdx].studentName == studentName) {
            // If student is found, break out of the for loop
            // and confirm student was found. This way the index
            // returned will remain the correct one.
            studentFound = 1;
            break; 
        }
    }

    // If student was not found, assign noStudents to index
    if (studentFound == 0)
        studentIdx = noStudents;

    // returns either noStudents if student was not found
    // or the correct student's index if student was found
    return studentIdx;
} 

// Display a student's grade if the student is found
// otherwise output an error msg
void ClassRoll::showGrade(string studentName) const {
    // Assign index of studentName in array
    int studentIdx = searchStudent(studentName);
    // If student was found, show grade
    if (studentIdx != noStudents) 
        cout << "Grade: " << students[studentIdx].letterGrade << "\n";
    // Otherwise output error
    else 
        cout << "Error403: Could not find student " << studentName << "\n";
}

// Change a student's grade if the student and new grade are valid,
// otherwise output an error message accordingly
void ClassRoll::changeGrade(string studentName, char newGrade) {
    // Convert param input to uppercase
    char upperCaseGrade = toupper(newGrade);
    // Array of valid grades
    int validGrades[5] = {'A', 'B', 'C', 'D', 'F'};
    // Assign index of studentName in array
    int studentIdx = searchStudent(studentName);
    // Check for valid grade
    bool isGradeValid = false;
    
    // Break out if student is not found
    if (studentIdx == noStudents) {
        // Not sure if having return statements to break early out 
        // of a function impacts readibility negatively or not. If
        // it does I won't use them anymore for future coding assessements.
        cout << "Error404: Could not find student " << studentName << "\n";
        return;
    }

    // Check if grade is valid
    for (int gradeIdx = 0; gradeIdx < 5; gradeIdx++) {
        // If grade is found, break out of for loop
        if (upperCaseGrade == validGrades[gradeIdx]) {
            isGradeValid = true;
            break;
        }
    }

    // Break out if grade is invalid
    if (!isGradeValid) {
        cout << "Error405: Grade " << upperCaseGrade << " is invalid" << "\n";    
        return;    
    }

    // Update the student's grade if all is valid
    students[studentIdx].letterGrade = upperCaseGrade;
}

// ClassRoll Constructer implementation
// Fills in students array from fileName data,
// updates the course name and max students
ClassRoll::ClassRoll(string fileName, string newCourseName, int newMaxStudents) {
    // Assign course name
    courseName = newCourseName;

	// Assign and validate max student amount
	if (newMaxStudents > 0 && newMaxStudents <= SIZE) {
		maxStudents = newMaxStudents;
	} else {
		maxStudents = SIZE;
	}
	
    // Input file
	ifstream fin(fileName);
	if (!fin.is_open())
	{
		cout << "error opening " << fileName;
		system("pause");
		exit(-1);
	}

	int length;
	for (length = 0; length < maxStudents; length++)
	{
		// Send data from file to array
		getline(fin, students[length].studentName);
		if (fin.eof())
			break;
		fin >> students[length].assignmentTotal;
		fin >> students[length].testTotal;
		fin >> students[length].letterGrade;
		fin.ignore(80, '\n');
	}

    // update the number of students
	noStudents = length;
}

// Writes all of the students in the array to a file or a screen
void ClassRoll::writeStudents(ostream& fout) const {
	fout << left << setw(30) << "Student Name: " 
		<< setw(20) << right << "Assign Total"
		<< setw(20) << "Test Total"
		<< setw(22) << "Grade\n\n";

	for (int idx = 0; idx < noStudents; idx++) {
		fout << left << setw(30) << students[idx].studentName
			<< right << setw(20) << students[idx].assignmentTotal
			<< setw(20) << students[idx].testTotal
			<< setw(20) << students[idx].letterGrade << "\n";
	}

	fout << "\nNumber of Students: " << noStudents << "\n\n";
}