#include "Threading.h"
// practice with pthreads. 

Threading::Threading()
{
	pthread_t thread1, thread2; //use vectors for threads?
	string s1 = "first thread";
	string s2 = "second thread";
	
	const char * msg1 = s1.c_str();
	const char * msg2 = s2.c_str();
	int ret1, ret2;
	
	sem_init(&mutex, 0, 1);
	
	ret1 = pthread_create(&thread1, NULL, myfunction, (void *)msg1);
	ret2 = pthread_create(&thread2, NULL, myfunction, (void *)msg2);
	
	printf("Main function after pthread_create\n");

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	
	sem_destroy(&mutex);
	
	printf("First thread ret1 = %d\n", ret1);
	printf("Second thread ret1 = %d\n", ret2);
}

void Threading::myfunc1 (void *ptr)
{
	char *msg = (char *) ptr;
	printf("%s\n", msg);
	
	sem_wait(&mutex);
	sprintf(buf, "%s", "Hello There!");
	sem_post(&mutex);
	
	pthread_exit(0);
}

void Threading::myfunc2 (void *ptr)
{
	char *msg = (char *) ptr;
	
	printf("%s\n", msg);
	
	sem_wait(&mutex);
	printf("%s\n", buf);
	sem_post(&mutex);
	
	pthread_exit(0);
}

void *Threading::myfunction (void *myvar) //forward declaration, will be in header. 
{
	char *msg;
	msg = (char *) myvar;
	
	int i;
	for (i = 0; i<10; ++i){
		printf("%s %d\n", msg, i);
		sleep(1);
	}
	return myvar;
}