#include <stdexcept>
#include "puzzle.h"
using namespace std;

	Puzzle::Puzzle(string solution):solution{solution}{}

	bool Puzzle::guess(char c)
	{	
		if(c>122||c<97)
		{
			throw "error";
		}
		
		if(c<=122&&c>=97&&guesses[c]==false)
		{
			guesses[c]=true;
			
			for(int i=0;i<solution.size();i++)
			{
				if(solution[i]==c)
				{
					return true;
				}
			}
			
			return false;
		}			
		else
		return false;
	}
	
	bool Puzzle::solve(string proposed_solution)
	{	
		if(proposed_solution==solution)
		return true;
		
		else
		return false;
	}

	string Puzzle::to_string()
	{
		string output;
		for(int i=0;i<solution.size();i++)
		{
			if(guesses[solution[i]]==true||solution[i]==32||solution[i]==39||solution[i]==45)
			output+=solution[i];

			else
			output+="_";
		}	
		output+="\n";
		return output;
	}

	string Puzzle::get_solution()
	{
		return solution;
	}



