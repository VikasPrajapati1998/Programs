// condition variable 1
#include <iostream>
#include <unistd.h>
#include <error.h>
#include <pthread.h>

using namespace std;

void* fuel_filling(void *f);
void* car(void *c);
int fuel = 0;
pthread_mutex_t mutex; // create mutex
pthread_cond_t cv; // conditional variable

void* fuel_filling(void *f){
	for(int i=0; i<5; i++){
		fuel += 25;
		cout<<"Filling fuel to car...."<<fuel<<endl;
		sleep(1);
	}
	pthread_cond_signal(&cv); // signal() cv
	return NULL;
}

void* car(void *c){
	pthread_cond_wait(&cv, &mutex); // wait() cv
	for(int i=0; i<5; i++){
		if(fuel>=40){
			fuel -= 40;
			cout<<"Using fuel by car...."<<fuel<<endl;
		}
		else{
			cout<<"No fuel."<<endl;
		}
		sleep(1);
	}
	return NULL;
}

int main(int argc, char* argv[]){
	pthread_t t[2];
	
	pthread_mutex_init(&mutex, NULL); // initialize mutex
	pthread_cond_init(&cv, NULL); // initialize conditional variable
	
	for(int i=0; i<2; i++){
		if(i==1){
			if(pthread_create(t+i, NULL, fuel_filling, NULL) != 0){
				perror("Failed to create thread.");
				return 1;
			}
		}
		else{
			if(pthread_create(t+i, NULL, car, NULL) != 0){
				perror("Failed to create thread.");
				return 2;
			}
		}
	}
	
	for(int i=0; i<2; i++){
		if(pthread_join(t[i], NULL) != 0 ){
			perror("Failed to join thread.");
			return 3;
		}
	}
	
	pthread_mutex_destroy(&mutex); // destroy mutex
	pthread_cond_destroy(&cv); // destroy conditional variable
	
	return 0;
}
