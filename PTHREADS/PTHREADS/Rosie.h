#ifndef ROSIE_H
#define ROSIE_H

#include "RosieAssistants.h"
#include "RosieArgCheck.h"

using namespace std;

class Rosie {
public:
    Rosie(string name);
    int RandomR();
    void greet();
    void affirm();
    void reportError(string item, string reason, int n);
    void useArgs(int min, int max, int rArgc, char **rArgv);

private:
    RosieAssistants *ras;
    RosieArgCheck *rac;
    string userName;
    string myName;
};

#endif //ROSIE_H
