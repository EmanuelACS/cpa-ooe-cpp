#include "ClassRoll.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
/**
 * Name: Emanuel Dobra
 * Implementation file for ClassRoll
*/

// ClassRoll Constructer implementation
ClassRoll::ClassRoll(string fileName, int newMaxStudents) {
    // Input file
	ifstream fin(fileName);
	if (!fin.is_open())
	{
		cout << "error opening " << fileName;
		system("pause");
		exit(-1);
	}

	int length = 0;
	for (; length < newMaxStudents; length++)
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