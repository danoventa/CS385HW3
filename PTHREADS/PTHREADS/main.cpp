#include "uberconnect.h"

int main (int argc, char **argv)
{
	ArgCheck *ac = new ArgCheck(0, 2, argc, argv);
	ac->checkEmAll();
	
	
	return 0;
}

