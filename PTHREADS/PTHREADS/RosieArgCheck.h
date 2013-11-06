#ifndef ROSIEARGCHECK_H
#define ROSIEARGCHECK_H

#include <cstdio>
#include <iostream>

using namespace std;


class RosieArgCheck {
public:
	RosieArgCheck(int min, int max, int argc, char **argv);
	int checkNumArgs();
	void checkEmAll();
	/*FILE tryFile(std::string FileName);*/
private:
	int minArgs;
	int maxArgs;
	int numArgs;
	char **argVars;
};


#endif 