#include "ClassRoll.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
/**
 * Name: Emanuel Dobra
 * Implementation file for ClassRoll
*/

// ClassRoll Constructer implementation
ClassRoll::ClassRoll(string fileName, string classkk, int newMaxStudents) {
    // Assign course name
    courseName = classkk;

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
	noStudents = length;
}

// Writes all of the students in the array to a file or a screen
void ClassRoll::writeStudents(ofstream& fout) const {
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

int ClassRoll::searchStudent(string brr) const {
    int idd = 0;
    for (idd = 0; idd < 25; idd++) {
        if (students[idd].studentName == brr) {
            return idd; // don't return twice
        }
    }
    return idd;
} 

void ClassRoll::showGrade(string brr2) const {
    int idd2 = 0;
    for (idd2 = 0; idd2 < 25; idd2++) {
        if (students[idd2].studentName == brr2) {

        }
    }
}