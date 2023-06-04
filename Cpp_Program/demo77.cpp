// pthread_barrier
#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

using namespace std;

pthread_barrier_t barrier; // create barrier variable
pthread_mutex_t mutex;

void* task(void *args);

void* task(void *args){
	cout<<"Waiting at the barrier....\n";
	pthread_barrier_wait(&barrier); // wait to get 3 thread
	cout<<"Passed the barrier...\n";
	sleep(1);
	
	return NULL;
}

int main(int argc, char* argv[]){
	int size=9;
	pthread_t t[size];
	pthread_barrier_init(&barrier, NULL, 3); // initialize barrier
	pthread_mutex_init(&mutex, NULL);
	//pthread_cond_init(&cv, NULL);
	for(int i=0; i<size; i++){
		if(pthread_create(t+i, NULL, task, NULL) != 0){
			perror("Failed to create thread.");
			return 1;
		}
	}
	for(int i=0; i<size; i++){
		if(pthread_join(t[i], NULL) != 0){
			perror("Failed to join thread.");
			return 2;
		}
	}
	
	pthread_barrier_destroy(&barrier);
	pthread_mutex_destroy(&mutex);
	//pthread_cond_destroy(&cv);
	
	return 0;
}