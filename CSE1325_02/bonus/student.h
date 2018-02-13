#ifndef __STUDENT_H
#define __STUDENT_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Student
{
	string student_name;
	double homework_sum = 0;
	double homework_num_grades = 0;
	double exam_sum = 0;
	double exam_num_grades = 0;
	
	public:
	Student(string name);
	
	string name();

	void exam(double e_grade);

	void homework(double h_grade);
	
	double average();
};
#endif
