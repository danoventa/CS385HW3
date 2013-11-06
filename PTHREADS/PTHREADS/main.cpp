#include "uberconnect.h"

int main (int argc, char **argv)
{
	Rosie *rosie = new Rosie("Rosie", true);
	rosie->useArgs(0, 5, argc, argv);
	
	return 0;
}

