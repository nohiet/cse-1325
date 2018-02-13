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
	
	while(hold != "end")
	{
	
	cout << "Enter the students exam grade/s, type a number less than zero to change to homework" << endl;
	getline(cin,hold);

		if(std::stoi(hold) < 0)
		{
			break;
		}

	grade = std::stod (hold);
        student.exam(grade);

	}

	cout << endl << endl;
	
	while(hold != "end")
        {

        cout << "Enter the students homework grade/s, type a number less than 0 to stop" << endl;
        getline(cin,hold);

                if(std::stoi(hold) < 0)
                {
                        break;
                }

        grade = std::stod (hold);
        student.homework(grade);

        }


	cout << endl << endl << name << "'s grade average is: " << student.average() << endl;
}
