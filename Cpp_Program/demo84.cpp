#include <iostream>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <time.h>

using namespace std;

sem_t fork[5];
void* philosopher(void *args);
void printStatus(void);
pthread_mutex_t m1;
pthread_mutex_t m2;
char status[5] = {'T', 'T', 'T', 'T', 'T'};

void printStatus(void){
    pthread_mutex_lock(&m2);
    for(int i=0; i<5; i++)
        cout<<status[i]<<"   ";
    cout<<endl;
    pthread_mutex_unlock(&m2);    
}    

void* philosopher(void *args){
    int num = *(int*)args;
    sem_wait(&fork[num]);
    sem_wait(&fork[(num+1)%5]);
    pthread_mutex_lock(&m1);
    printStatus();
    status[num] = 'E';
    printStatus();
    sleep(1);
    pthread_mutex_unlock(&m1);
    sem_post(&fork[num]);
    sem_post(&fork[(num+1)%5]);
    status[num] = 'T';
    printStatus();
    
    return NULL;
}

int main(int argc, char *argv[])
{
	pthread_mutex_init(&m1, NULL);
	pthread_mutex_init(&m2, NULL);
	// initialize semaphore
	for(int i=0; i<5; i++)
	    sem_init(&fork[i], 0, 1);
	// create thread
	pthread_t philo[5];
	for(int i=0; i<5; i++)
	    pthread_create(&philo[i], NULL, philosopher, (void*)&i);
	// join thread
	for(int i=0; i<5; i++)
	    pthread_join(philo[i], NULL);
	// destroy thread
	for(int i=0; i<5; i++)
	    sem_destroy(&fork[i]);
	
	pthread_mutex_destroy(&m1);
	pthread_mutex_destroy(&m2);
	
	return 0;
}