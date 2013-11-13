#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <iostream> 
#include <string> 
#include "Assistant.h"
#include "ArgCheck.h"

using namespace std;

class Operations
{
public:
	Operations();
	~Operations();
	void argChecker(int min, int max, int argc, char **argv);
	void checkFile();
private:
	char **opArgs;
	ArgCheck *ac;
	ifstream inFile;
};
#endif
