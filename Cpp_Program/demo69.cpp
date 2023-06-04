// passing value to thread
#include <iostream>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

using namespace std;

int prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

pthread_mutex_t mutex; // create mutex variable

void* task(void *arg);

void* task(void *arg){
	pthread_mutex_lock(&mutex); // mutex lock
	int index = *(int*)arg;
	cout<<prime[index]<<endl;
	pthread_mutex_unlock(&mutex); // mutex unlock
	return NULL;
}

int main(int argc, char* argv[]){
	pthread_t t[10]; // create thread variable
	
	pthread_mutex_init(&mutex, NULL); // initialize mutex
	
	// create thread and passing value to thread
	for(int i=0; i<10; i++){
		int *num = new int;
		*num = i;
		if(pthread_create(t+i, NULL, task, (void*)num) != 0){
			perror("Fail to create thread."); 
			return 1;
		}
	}	
	
	// thread join
	for(int i=0; i<10; i++){
		if(pthread_join(t[i], NULL) != 0){
			perror("Fail to join thread.");
			return 2;	
		}         
	}       
	
	pthread_mutex_destroy(&mutex); // destroy mutex
	
	return 0;
}
