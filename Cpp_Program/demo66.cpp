// critical section solution using mutex
#include <iostream>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

int mails = 0;
pthread_mutex_t mutex; // creation of mutex

void* task(void *arg);

void* task(void *arg){
	pthread_mutex_lock(&mutex);
	for(int i=0; i<10000000; i++)
		mails++;		
	pthread_mutex_unlock(&mutex);
	return NULL;
}

int main(int argc, char* argv[]){
	pthread_t t[5];
	pthread_mutex_init(&mutex, NULL); // initialization of mutex
	
	for(int i=0; i<5; i++){
		if(pthread_create(t+i, NULL, task, NULL) != 0){
			perror("Failed to create thread.");
			return 1;
		}
		cout<<"Thread start execution."<<endl;
		
		if(pthread_join(t[i], NULL) != 0){
			perror("Fail to join thread.");
			return 2;
		}
		cout<<"Execution finised."<<endl;
		
		if(pthread_detach(t[i]) == 0){
			perror("Fail to detach thread.");
			return 3;
		}
		cout<<"Detaching thread."<<endl;
	}
	
	pthread_mutex_destroy(&mutex); // destroy of mutex
	cout<<mails<<endl;
	
	return 0;
}
