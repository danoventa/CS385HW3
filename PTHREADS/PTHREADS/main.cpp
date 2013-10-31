#include "uberconnect.h"


int main (int argc, char *argv[])
{
	Rosie *rosie = new Rosie();
	rosie->greet();
	rosie->affirm();
	
	
	rosie->reportError("test case", -1);
	return 0;
}

