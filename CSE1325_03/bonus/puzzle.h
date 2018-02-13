#ifndef __PUZZLE_H
#define __PUZZLE_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Puzzle
{
	string solution;
	bool guesses [255] = {false};

	public:
	Puzzle(string solution);
	bool guess(char c);
	bool solve(string proposed_solution);
	string to_string();
	string get_solution();
};
#endif
