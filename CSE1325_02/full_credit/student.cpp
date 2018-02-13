#include <stdexcept>
#include "student.h"
using namespace std;

	Student::Student(string name):student_name{name},exam_sum{0},exam_num_grades{0}{}

	string Student::name()
	{
		return student_name;
	}

	void Student::exam(double grade)
	{
		exam_sum += grade;
		exam_num_grades++;
	}

	double Student::average()
	{
		if(exam_num_grades==0)
			throw std::runtime_error("No grades inputted");
		return(exam_sum/exam_num_grades);
	}
	



 
