// pthread_exit
#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

using namespace std;

void* task(void *arg);

void* task(void *arg){
	srand(time(NULL));
	int value = (rand()%6)+1;
	int *result = new int;
	*result = value;
	sleep(2);
	cout<<"Thread result : "<<*result<<endl;
	//return (void*)result;
	pthread_exit((void*)result); // pthread is same as return
	return (void*)result;
}

int main(int argc, char* argv[]){
	int *res;
	pthread_t th;
	if(pthread_create(&th, NULL, task, NULL) != 0){
		perror("Failed to create thread.");
		return 1;
	}
	// return 0;
	pthread_exit(0); // it does not execute the code below it
	// but complete the execution of all other threads.
	if(pthread_join(th, (void**)&res) != 0){
		perror("Failed to join thread.");
		return 2;
	}
	cout<<"Result : "<<*res<<endl;
	return 0;
}
