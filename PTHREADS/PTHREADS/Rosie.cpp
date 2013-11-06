#include "Rosie.h"

Rosie::Rosie(string name, bool useArgs){
    ras = new RosieAssistants();
    myName = name;
    greet();
}

void Rosie::greet()
{
    cout << "Hi, I'm " << myName << ". What's your name?" << endl << "\t";
    userName = ras->getAName();
    affirm();
}

void Rosie::affirm()
{
    cout << "Let me see what I can do for you, " << userName << "? :)" << endl;
}

void Rosie::reportError(string item, string reason, int n)
{
    cout << endl << "How embarassing!" << endl;
    cout << "I'm sorry " << userName
                << ", but there's an issue with your " << item << ". :(" << endl
                << "Apparently the " << reason << endl;
    exit(n);
}

void Rosie::useArgs(int min, int max, int rArgc, char **rArgv)
{
		cout << "I'm activating the argument checker " << userName << "." << endl;
		rac = new RosieArgCheck(min, max, rArgc, rArgv);
}

int Rosie::RandomR()
{
    return 0;
}

