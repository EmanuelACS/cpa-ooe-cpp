#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

/*
    Name: Emanuel Dobra
    This program loads data from a file into a student records array
    (student name, assignment total, test total and grade for up to 25 students)
    It then writes each student's information to a file
*/

// Refresher Lab: Arrays and Functions
const int SIZE = 10;

struct StudentRec {
    string studentName;
    int totalAssignment;
    int totalTests;
    char grade;
};

// Function Prototypes
int loadArray(StudentRec[]);
void showArray(ofstream&, StudentRec[], int);

int main()
{
    StudentRec records[SIZE]; // Array of student records
	int noStudents; // # of students
	
    // Output file
	ofstream fout("student.rpt");
	if (!fout.is_open())
	{
		cout << "error opening student.rpt";
		system("pause");
		exit(-1);
	}

    // Load arrays and output info to file
	noStudents = loadArray(records); 
	showArray(fout, records, noStudents);

	cout << "program completed successfully" << endl;
    // Output file info's to console
    cout << "\n\nStudent Data: \n";
    system("type student.dat");
    cout << "\n\nStudent Report: \n";
    system("type student.rpt");
	system("pause");
}

// Fills array with info from input file
int loadArray(StudentRec records[])
{
	// Input file
	ifstream fin("student.dat");
	if (!fin.is_open())
	{
		cout << "error opening student.dat";
		system("pause");
		exit(-1);
	}

	int length = 0;
	for (; length < SIZE; length++)
	{
		getline(fin, records[length].studentName);
		if (fin.eof())
			break;
		fin >> records[length].totalAssignment;
		fin >> records[length].totalTests;
		fin >> records[length].grade;
		fin.ignore(80, '\n');
	}
	return length;
}

// Prints arrays to output file
void showArray(ofstream& fout, StudentRec records[], int noStudents)
{
	// Output titles 
	fout << left << setw(30) << "Student Name" << setw(20) << right << "Assignment Total" <<
		setw(20) << "Test Total" << setw(20) << "Grade" << endl << endl;

	// Output results
	for (int index = 0; index < noStudents; index++) {
		fout << left << setw(30) << records[index].studentName << setw(20) << right << records[index].totalAssignment <<
			setw(20) << records[index].totalTests << setw(20) << records[index].grade << endl;
	}

	fout << "\nNumber of Students: " << noStudents << endl;
}

/* OUTPUT
program completed successfully


Student Data:
J. Doe
50 290 A
P. Smith
45 190 D
T. Jones
50 100 F

Student Report:
Student Name                      Assignment Total          Test Total               Grade

J. Doe                                          50                 290                   A
P. Smith                                        45                 190                   D
T. Jones                                        50                 100                   F

Number of Students: 3
*/