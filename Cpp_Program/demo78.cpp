// pthread_mutex
#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#define ThreadNumber 5
using namespace std;

pthread_mutex_t mutex;
bool flag = true;
void* task(void *args);

void* task(void *args){
	pthread_mutex_lock(&mutex);
	cout<<" This is the task."<<endl;
	usleep(500000);
	pthread_mutex_unlock(&mutex);
	
	return NULL;
}

int main(void){
	pthread_t t[ThreadNumber];
	pthread_mutex_init(&mutex, NULL);
	for(int i=0; i<ThreadNumber; i++){
		if(pthread_create(t+i, NULL, task, NULL) != 0){
			perror("Failed to create thread.");
		}
		pthread_detach(t[i]);
	}
	
	for(int i=0; i<ThreadNumber; i++){
		if(pthread_join(t[i], NULL) != 0){
			perror("Failed to join thread.");
		}
	}
	
	pthread_mutex_destroy(&mutex);
	
	return 0;
}