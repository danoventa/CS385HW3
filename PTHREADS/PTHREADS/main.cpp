#include "uberconnect.h"

int main (int argc, char **argv)
{
	Operations *op = new Operations();
	op->argChecker(0, 6, argc, argv);
	op->~Operations();
	
	return 0;
}

