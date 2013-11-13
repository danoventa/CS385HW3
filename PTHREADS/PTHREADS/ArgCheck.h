#ifndef ARGCHECK_H
#define ARGCHECK_H

#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class ArgCheck {
public:
	ArgCheck(int min, int max, int argc, char **argv);
	void checkNumArgs();

private:
	int minArgs;
	int maxArgs;
	int numArgs;
	char **argVars;
};


#endif 