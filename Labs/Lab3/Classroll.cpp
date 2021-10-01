#include "Classroll.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
/**
 * Name: Emanuel Dobra
 * Implementation file for ClassRoll
*/

ClassRoll::ClassRoll(string fileName, int maxStudents) {
    // Input file
	ifstream fin(fileName);
	if (!fin.is_open())
	{
		cout << "error opening " << fileName;
		system("pause");
		exit(-1);
	}

	int length = 0;
	for (; length < maxStudents; length++)
	{
		getline(fin, students[length].studentName);
		if (fin.eof())
			break;
		fin >> students[length].assignmentTotal;
		fin >> students[length].testTotal;
		fin >> students[length].letterGrade;
		fin.ignore(80, '\n');
	}
}