#ifndef ROSIE_H
#define ROSIE_H

#include "Assistants.h"

using namespace std;

class Rosie {
public:
    Rosie(string name);
    int RandomR();
    void greet();
    void affirm();
    void reportError(string item, string reason, int n);

private:
    Assistants *assistant;
    string userName;
    string myName;
};

#endif //ROSIE_H
