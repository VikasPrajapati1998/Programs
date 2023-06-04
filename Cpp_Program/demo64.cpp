// use of mutex
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
	// thread variable create
	pthread_t t1, t2, t3, t4;
	
	pthread_mutex_init(&mutex, NULL); // initialization of mutex
	cout<<"Thread creating."<<endl;
	
	if(pthread_create(&t1, NULL, task, NULL) != 0)
		return 1;
	if(pthread_create(&t2, NULL, &task, NULL) != 0)
		return 2;
	if(pthread_create(&t3, NULL, task, NULL) != 0)
		return 3;
	if(pthread_create(&t4, NULL, &task, NULL) != 0)
		return 4;
	cout<<"Thread execution done."<<endl;
	
	if(pthread_join(t1, NULL))
		return 5;
	if(pthread_join(t2, NULL))
		return 6;
	if(pthread_join(t3, NULL))
		return 7;
	if(pthread_join(t4, NULL))
		return 8;
	cout<<"Thread joining done."<<endl;
	
	pthread_mutex_destroy(&mutex); // destroy of mutex
	
	cout<<mails<<endl;
	return 0;
}