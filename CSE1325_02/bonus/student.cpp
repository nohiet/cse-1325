#include "student.h"
#include <exception>
using namespace std;

	Student::Student(string name):student_name{name},exam_sum{0},exam_num_grades{0},homework_sum{0},homework_num_grades{0}{}

	string Student::name()
	{
		return student_name;
	}

	void Student::exam(double grade)
	{
		exam_sum += grade;
		exam_num_grades++;
	}

	void Student::homework(double grade)
	{
		homework_sum += grade;
		homework_num_grades++;
	}

	double Student::average()
	{
		if(homework_num_grades == 0 && exam_num_grades==0)
			throw std::runtime_error("no grades inputed");                      

		if(exam_num_grades==0)
			return (homework_sum/homework_num_grades);

		if(homework_num_grades==0)
                        return (exam_sum/exam_num_grades);

		return((.4*(exam_sum/exam_num_grades))+(.6*(homework_sum/homework_num_grades)));
	}
	



 
