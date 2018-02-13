#ifndef __FUSE_H
#define __FUSE_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Fuse
{
	int time;
	
	public:
	Fuse(int time);
	bool burn();
	string to_string();
};
#endif
