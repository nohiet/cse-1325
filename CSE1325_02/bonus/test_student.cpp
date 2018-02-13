#include <iostream>
#include <string>
#include "student.h"
using namespace std;

int main()
{
        Student student("Bjarne Stroustrup");
	student.exam(100.0);
	student.exam(90.0);
	student.exam(80.0);
	student.homework(100);
	student.homework(90);
	student.homework(80);
	student.homework(70);
	student.homework(60);

	
	if(student.name()!="Bjarne Stroustrup")
		cout << "error, student.name does not match initialization!" << endl;
	if(student.average()!=84)
		cerr << "point average incorrect fix!!!" << endl; 

	Student nada("any name");
	try
	{
	nada.average();
	}
	catch(runtime_error)
	{
		return 0;
	}
	cerr << "no exception thrown from student.cpp, fix!!!" << endl;
}
