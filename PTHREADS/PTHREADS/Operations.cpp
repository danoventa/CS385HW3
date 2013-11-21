#include "Operations.h"

Operations::Operations(int bufSize)
{
	cout << "It has begun \n";
	bufferSize = bufSize;
}

Operations::~Operations()
{
	cout << "Exiting the Operations Class. \n";
	inFile.close();
}

void Operations::checkArg(int min, int max, int argc, char **argv)
{
	opArgs = argv;
	ac = new ArgCheck(min, max, argc, argv);
	ac->checkNumArgs();
}

void Operations::openFile()
{
	string fileName;
	fileName.assign(opArgs[0]);
	inFile.open(fileName);

	if (!inFile.is_open()){
		cout << "File name " << fileName << " isn't here... :( \n";
		exit (1);
	}
	else
		cout << "File name " << fileName << " exists! :) \n";
}

void Operations::fileToThreading()
{
	
}



// another function to send the buffer chunk to the 

void Operations::printByArr(unsigned char inBytes[])
{
	printf("this is %d %i  \n", inBytes[0], inBytes[1]);
}

