// pthread_mutex_trylock
/*
chefs = threads;
stove = shared data (+mutex);
*/
#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>

using namespace std;

#define NT 10

pthread_mutex_t stoveMutex;
int stoveFuel = 100;

void* task(void *arg);

void* task(void *arg){
	srand(time(NULL));
	pthread_mutex_lock(&stoveMutex);
	int fuelNeeded=(rand()%20);
	if(stoveFuel-fuelNeeded<0){
		cout<<"No more fuel... going home."<<endl;	
	}
	else{
		stoveFuel-=fuelNeeded;
		usleep(500000);
		cout<<"Fuel left. "<<stoveFuel<<endl;
	}
	pthread_mutex_unlock(&stoveMutex);
	
	return NULL;
}

int main(int argc, char* argv[]){
	pthread_t t[NT];
	pthread_mutex_init(&stoveMutex, NULL);
	for(int i=0; i<NT; i++){
		if(pthread_create(t+i, NULL, task, NULL) != 0){
			perror("Failed to create thread.");
			return 1;
		}
	}
	for(int i=0; i<NT; i++){
		if(pthread_join(t[i], NULL) != 0){
			perror("Failed to join thread.");
			return 2;
		}
	}
	
	pthread_mutex_destroy(&stoveMutex);
	return 0;
}