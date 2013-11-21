#include "uberconnect.h"

int main (int argc, char **argv)
{
	printf("Name:\t\t Daniel A. Noventa\nACCC ID:\t dflore22@uic.edu\n");
	Operations *op = new Operations(80);

	op->checkArg(0, 6, argc, argv);
	op->openFile();

	op->~Operations();
	return 0;
}

