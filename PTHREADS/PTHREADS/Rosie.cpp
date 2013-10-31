#include "Rosie.h"

Rosie::Rosie(){
	
}

void Rosie::greet()
{ 
	cout << "Hi, I'm Rosie. What's your family name?" << endl << "\t";
	lastName = getAName();
}

void Rosie::affirm()
{
	cout << "Let me see what I can do for you, Mr. " << lastName << "? ;)" << endl;
}

void Rosie::reportError(string s, int n)
{
	cout << endl << "Gosh, how embarassing!" << endl;
	cout << "I'm sorry Mr. " << lastName << ". There's an issue with your  " << s << ". :(" << endl;
	exit(n);
}

int Rosie::RandomR()
{
	return 0;
}
