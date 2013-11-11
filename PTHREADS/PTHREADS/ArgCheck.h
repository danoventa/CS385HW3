#ifndef ARGCHECK_H
#define ARGCHECK_H

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;


class ArgCheck {
public:
	ArgCheck(int min, int max, int argc, char **argv);
	void checkEmAll();
	void checkNumArgs();
	void checkDataFile();
private:
	int minArgs;
	int maxArgs;
	int numArgs;
	char **argVars;
};


#endif 