#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#include <semaphore.h>

using namespace std;
// create semaphore variable as array
sem_t fork[5];

void printStatus(void);
void* philosopher(void *args);
char status[5] = {'T', 'T', 'T', 'T', 'T'};
// mutex declearation
pthread_mutex_t mutex;

void printStatus(void){
	pthread_mutex_lock(&mutex);
	for(int i=0; i<5; i++)
		cout<<status[i]<<"	";
	cout<<endl;
	pthread_mutex_unlock(&mutex);
}

void* philosopher(void *args){
	int num = *(int*)args;
	sem_wait(&fork[num]);
	sem_wait(&fork[(num+1)%5]);
	printStatus();
	status[num] = 'E';
	printStatus();
	sem_post(&fork[num]);
	sem_post(&fork[(num+1)%5]);
	status[num] = 'T';
	printStatus();
	return NULL;
}

int main(void){
	// initialize mutex
	pthread_mutex_init(&mutex, NULL);
	// initialize semaphore
	for(int i=0; i<5; i++)
		sem_init(&fork[i], 0, 1);
	
	// create philosophers threads varible as array
	pthread_t philo[5];
	// create threads
	for(int i=0; i<5; i++)
		pthread_create(&philo[i], NULL, philosopher, (void*)&i);
	// join threads
	for(int i=0; i<5; i++)
		pthread_join(philo[i], NULL);
	// destroy threads
	for(int i=0; i<5; i++)
		sem_destroy(&fork[i]);
	// destroy mutex
	pthread_mutex_destroy(&mutex);
		
	return 0;
}
