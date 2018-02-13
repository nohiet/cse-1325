#include <iostream>
#include <string>
#include "puzzle.h"
#include "fuse.h"
using namespace std;

int main (void)
{
	string hold,sol,player_input;
	bool bold=true;		
	
	cout<<"player 1 input the word to guess!"<<endl;
	getline(cin,player_input);
	
	for(int i=0;i<80;i++)
		cout<<endl;


	cout<<"==========="<<endl<<" B O O M ! "<<endl<<"==========="<<endl;
	cout<<"enter lower case letters to guess,"<<endl<<"! to propose a solution,"<<endl<<"0 to exit."<<endl;
	Puzzle puzzle(player_input);
        Fuse fuse(10);


	while(true)
	{	
		hold="";
		cout << fuse.to_string() << endl << puzzle.to_string();

		getline(cin,hold);
		if(hold=="0")
			break;

		else if(hold=="!")
		{	
			sol="";
			cout<<"Please enter your solution: "<<endl;
			getline(cin,sol);

		if(puzzle.solve(sol)==false)
			{	
				cout<<"####BOOM####"<<endl<<"the real solution was: "<<puzzle.get_solution()<<endl;
			break;
			}
			
			else
			{
				cout<<"*** WINNER ***"<<endl;
				break;
			}
		}
		
		else
		{
			if(puzzle.guess(hold[0])==false)
			{	
				bold=fuse.burn();
				try
				{
					puzzle.guess(hold[0]);			
				}

				catch(string h)
	                        {
        	                        cout<<"invalid charecter, try again!"<<endl;
                	        }

			}
			
			

			if(bold==false)
			{
				cout<<"#####BOOOM####"<<endl<<"You ran out of tries!"<<endl;
				cout<<"the real solution was: "<<puzzle.get_solution()<<endl;
				break;
			}
		}
			
	}

}
