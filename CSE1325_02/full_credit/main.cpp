#include <iostream>
#include <string>
#include "student.h"
using namespace std;

int main(void)
{
	int i;
	string name, hold;
	double grade;

	cout << "Enter the students name: " << endl;
	
	getline(cin,name);
	
	Student student(name);
	
	while(hold != "end" || hold != "END")
	{
	
	cout << "Enter the students grade, type a number less than 0 to end" << endl;
	getline(cin,hold);

		if(stoi(hold) < 0)
		{
			break;
		}

	grade = std::stod (hold);
        student.exam(grade);

	}
	try
	{
		cout << endl << endl << student.name() << "'s grade average is: " << student.average() << endl;
	}
	catch(runtime_error)
	{
		cerr << "No grades inputted, invalled output" << endl;
	}
}
