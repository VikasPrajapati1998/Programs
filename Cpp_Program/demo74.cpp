// Condition variable 3
#include <iostream>
#include <unistd.h>
#include <error.h>
#include <pthread.h>

using namespace std;

int fuel = 0;
pthread_mutex_t mutex; // create mutex
pthread_cond_t cv; // conditional variable

void* fuel_filling(void *f);
void* car(void *c);

void* fuel_filling(void *f){
	pthread_mutex_lock(&mutex);
	for(int i=0; i<4; i++){
		fuel += 20;
		cout<<"Filling fuel to car...."<<fuel<<endl;
		sleep(1);
		pthread_cond_broadcast(&cv);
	}
	pthread_mutex_unlock(&mutex);
	return NULL;
}

void* car(void *c){
	pthread_mutex_lock(&mutex);
	for(int i=0; i<4; i++){
		pthread_cond_wait(&cv, &mutex);
		if(fuel>=15){
			fuel -= 15;
			cout<<"Using fuel by car...."<<fuel<<endl;
		}
		else{
			cout<<"No fuel."<<endl;
		}
		sleep(1);
		pthread_cond_broadcast(&cv);
	}
	pthread_mutex_unlock(&mutex);
	return NULL;
}

int main(int argc, char* argv[]){
	int limit = 3;
	pthread_t t1[limit], t2[limit];
	pthread_mutex_init(&mutex, NULL); // initialize mutex
	pthread_cond_init(&cv, NULL); // initialize cv
	for(int i=0; i<limit; i++){
		if(pthread_create(t1+i, NULL, fuel_filling, NULL) != 0){
			perror("Failed to create thread.");
			return 1;
		}
		if(pthread_create(t2+i, NULL, car, NULL) != 0){
			perror("Failed to create thread.");
			return 2;
		}
	}
	for(int i=0; i<limit; i++){
		if(pthread_join(t1[i], NULL) != 0 ){
			perror("Failed to join thread.");
			return 3;
		}
		if(pthread_join(t2[i], NULL) != 0){
			perror("Failed to join thread.");
			return 4;
		}
	}
	pthread_mutex_destroy(&mutex); // destroy mutex
	pthread_cond_destroy(&cv); // destroy conditional variable
	return 0;
}
