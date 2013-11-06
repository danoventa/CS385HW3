#include "RosieArgCheck.h"

RosieArgCheck::RosieArgCheck(int min, int max, int argc, char **argv)
{
	minArgs = min;
	maxArgs = max;
	numArgs = argc;
	argVars = argv;
}

void RosieArgCheck::checkEmAll()
{
	
}

int RosieArgCheck::checkNumArgs()
{
	if (numArgs < minArgs){
		return -1;
	}
	else if (numArgs > maxArgs)
	{
		return 0;
	}
	else 
		return 1;
}



/*


FILE RosieArgCheck::tryFile(std::string fileName)
{
	FILE *file;
	std::string request;
	
	if (((file = fopen(fileName, "r"))==NULL)){
		std::cout << "That file name was not valid, Mr. J. 
					Would you like to try another?" >> endl;
		std::cout << "Yes, or No?" << std::endl;
		std::cin >> request;
		
	}
}*/