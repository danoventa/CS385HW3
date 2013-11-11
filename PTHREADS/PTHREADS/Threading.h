#ifndef THREADING_H
#define THREADING_H

#include <iostream> 
#include <string> 
#include <cstdlib>
#include <pthread.h>
#include <cstring>
#include <semaphore.h>
#include <unistd.h>
#include <functional>

using namespace std;

class Threading
{
public:
	Threading();
	static void *myfunction(void *myvar);
	void myfunc1 (void *ptr);
	void myfunc2 (void *ptr);
private:
	char buf[24];
	sem_t mutex;
};
#endif