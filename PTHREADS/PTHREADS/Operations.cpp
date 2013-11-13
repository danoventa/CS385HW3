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
	checkFile();
}

void Operations::checkFile()
{
	string fileName;
	cout << "worked 1 \n";
	fileName.assign(opArgs[0]);
	cout << "worked 2 \n";
	inFile.open(fileName);

	if (!inFile.is_open()){
		cout << "File name " << fileName << " isn't here... :( \n";
		exit (1);
	}
	else
		cout << "File name " << fileName << " exists! :) \n";
}

void Operations::printByArr(unsigned char **inBytes){

}

