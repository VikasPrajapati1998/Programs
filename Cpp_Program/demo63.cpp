#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

void* task(void *arg){
	cout<<"This is the dummy data."<<endl;
	sleep(3);
	cout<<"This is the ending of thread."<<endl;
	return NULL;
}

int main(void){
	pthread_t t1, t2; // thread variable
	
	// Create threads
	
	if(pthread_create(&t1, NULL, task, NULL) != 0)
		return 1;
	
	if(pthread_create(&t2, NULL, task, NULL) != 0)
		return 1;
	
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	
	return 0;
}
