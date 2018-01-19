#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() 
{
    char *name=getenv("USER");

    cout << "Hello, " << name << "!" << endl;
    return 0;
}
