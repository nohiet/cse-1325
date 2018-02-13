#include <stdexcept>
#include "fuse.h"
using namespace std;

	Fuse::Fuse(int time):time{time}{}

	bool Fuse::burn()
	{	
		time--;
		if(time>0)
		return true;

		else
		return false;
	}

	string Fuse::to_string()
	{
		string output;
		output+="   ";

		for(int i=0;i<(time-1);i++)
		{
			output+="_";
		}
		output+="*\n";
		output+="  /\n";
		output+="/+\\\n";
		output+="| |\n";
		output+="|_|\n";
		
		return output;
	}	
