// passing and returning value to thread 2
#include <iostream>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

using namespace std;

int prime[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
pthread_mutex_t mutex; // create mutex
int sum = 0;

void* task(void *arg);

void* task(void *arg){
	pthread_mutex_lock(&mutex);
	int index = *(int*)arg;
	sum += prime[index];
	pthread_mutex_unlock(&mutex);
	int *ret = new int;
	*ret = sum;
	return (void*)ret;
}

int main(int argc, char* argv[]){
	pthread_t t[10]; // create thread
	
	pthread_mutex_init(&mutex, NULL); // initialize mutex 
	
	int *rt;
	for(int i=0; i<10; i++){
		int *num = new int;
		*num = i;
		if(pthread_create(t+i, NULL, task, (void*)num) != 0){
			perror("Fail to create thread."); 
			return 1;
		}
		if(pthread_join(t[i], (void**)&rt) != 0){
			    perror("Fail to join thread.");
			    return 2;
		}
	}
	pthread_mutex_destroy(&mutex);
	cout<<endl<<"The sum of array is : "<<*rt<<endl;
	delete rt;
	return 0;
}
