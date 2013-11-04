#include "uberconnect.h"


int main (int argc, char *argv[])
{
	Rosie *rosie = new Rosie("Rosie");

	rosie->reportError("file", "file failed to load.", -1);
	return 0;
}

