#include "uberconnect.h"

int main (int argc, char **argv)
{
	Rosie *rosie = new Rosie("Rosie");
	rosie->useArgs(0, 5, argc, argv);
	
	return 0;
}

