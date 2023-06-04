// passing value to thread and returning value from thread
#include <iostream>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

using namespace std;

int prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

pthread_mutex_t mutex; // creating mutex lock

void* task(void *arg);

void* task(void *arg) {
	pthread_mutex_lock(&mutex); // mutex lock
	int index = *(int*)arg;
	cout<<prime[index]<<endl;
	pthread_mutex_unlock(&mutex); // mutex unlock

	int *ret = new int;
	*ret = 1;
	return (void*)ret;
}

int main(int argc, char* argv[]) {
	// create thread variable
	pthread_t t[10];
	
	pthread_mutex_init(&mutex, NULL); // initializing mutex
	int *rt;

	// creating thread
	for(int i=0; i<10; i++) {
		int *num = new int;
		*num = i;
		if(pthread_create(t+i, NULL, task, (void*)num) != 0) {
			perror("Fail to create thread.");
			return 1;
		}
	}

	// join thread
	for(int i=0; i<10; i++) {
		if(pthread_join(t[i], (void**)&rt) != 0) {
			perror("Error to join thread.");
			return 2;
		}
	}

	if(*rt != 0)
		cout<<"Program Execution Finished With "<<*rt<<endl;

	pthread_mutex_destroy(&mutex); // destroy mutex

	delete rt;
	return 0;
}
