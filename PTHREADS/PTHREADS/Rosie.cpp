#include "Rosie.h"

Rosie::Rosie(string name){
    assistant = new Assistants();
    myName = name;
    greet();
}

void Rosie::greet()
{
    cout << "Hi, I'm " << myName << ". What's your name?" << endl << "\t";
    userName = assistant->getAName();
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

int Rosie::RandomR()
{
    return 0;
}

