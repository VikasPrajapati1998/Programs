// trylock and unlock
#include <iostream>
#include <unistd.h>
#include <pthread.h>

using namespace std;

void* task(void *arg);

pthread_mutex_t mutex; // create mutex

void* task(void *arg){
	if(pthread_mutex_trylock(&mutex) == 0){
		cout<<"Get the lock."<<endl;
	}
	else{
		cout<<"Did not get the lock."<<endl;
	}
	return NULL;
}

int main(int argc, char* argv[]){
	pthread_t t[5]; // create thread variable
	
	pthread_mutex_init(&mutex, NULL); // initialize mutex
	
	// create thread
	for(int i=0; i<5; i++){
		if(pthread_create(t+i, NULL, task, NULL) != 0){
			perror("Error to create thread.");
			return 1;
		}
	}
	// join thread
	for(int i=0; i<5; i++){
		if(pthread_join(t[i], NULL) != 0){
			perror("Error to join the thread.");
			return 2;
		}
	}
	
	pthread_mutex_destroy(&mutex); // destroy mutex
	
	return 0;
}
