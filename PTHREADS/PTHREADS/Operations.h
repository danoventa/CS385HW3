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
	Operations(int bufSize);
	~Operations();
	void checkArg(int min, int max, int argc, char **argv);
	void printByArr();
	void checkFile();
	void printByArr(unsigned char **inBytes);
private:
	char **opArgs;
	int bufferSize;
	ArgCheck *ac;
	ifstream inFile;
};
#endif
