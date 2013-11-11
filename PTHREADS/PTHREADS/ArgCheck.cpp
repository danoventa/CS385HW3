#include "ArgCheck.h"

ArgCheck::ArgCheck(int min, int max, int argc, char **argv)
{
	minArgs = min;
	maxArgs = max;
	numArgs = argc;
	argVars = argv;
}

void ArgCheck::checkEmAll()
{
	checkNumArgs();
	checkDataFile();
}

void ArgCheck::checkNumArgs()
{
	if (numArgs < minArgs)
	{
		cout << "Insuficient Arguments: Exiting \n";
		exit(1);
	}
	else if (numArgs > maxArgs)
	{
		cout << "Excessive Arguments: Exiting\n";
		exit(1);
	}
	else 
		cout << "Acceptable Number of Arguments\n";
}

void ArgCheck::checkDataFile()
{
	string fileName;
	if (argv[
	fileName.assign(argv[0];
	if (fileName == NULL){
		cout << "File name " << fileName << " does not exist, exiting program.\n";
		exit (1);
	}
	
}