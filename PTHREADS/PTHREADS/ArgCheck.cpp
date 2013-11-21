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
		exit(1);
	}
	else if (numArgs > maxArgs)
	{
		exit(1);
	}
}