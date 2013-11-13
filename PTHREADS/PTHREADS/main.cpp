#include "uberconnect.h"

int main (int argc, char **argv)
{
	Operations *op = new Operations(80);

	op->checkArg(0, 6, argc, argv);





	op->~Operations();
	return 0;
}

