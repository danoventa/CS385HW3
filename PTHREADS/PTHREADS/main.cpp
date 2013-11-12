#include "uberconnect.h"

int main (int argc, char **argv)
{
	ArgCheck *ac = new ArgCheck(0, 2, argc, argv);
	ac->checkNumArgs();
	string fileName = ac->checkFile();
	
	
	return 0;
}

