#include "ArgCheck.h"

ArgCheck::ArgCheck(int min, int max, int argc, char **argv)
{
	minArgs = min;
	maxArgs = max;
	numArgs = argc;
	argVars = argv;
}

void ArgCheck::checkNumArgs()
{
	if (numArgs < minArgs)
	{
		cout << "This porridge is too cold... :( \n";
		exit(1);
	}
	else if (numArgs > maxArgs)
	{
		cout << "This porridge is too hot!!!! :( \n";
		exit(1);
	}
	else 
		cout << "This porridge is just right! :) \n";
}