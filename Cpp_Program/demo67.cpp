// return value from thread
#include <iostream>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

using namespace std;

void* task(void *arg);

void* task(void *arg){
	srand(time(NULL));
	int value = (rand()%6)+1;
	//int *result = (int*)malloc(sizeof(int)); // use malloc for allocate memory
	int *result = new int;
	*result = value;
	cout<<"Thread result : "<<result<<endl;
	cout<<"result : "<<*result<<endl;
	
	return (void*)result;
}

int main(int argc, char* argv[]){
	pthread_t t;
	int *res;
	if(pthread_create(&t, NULL, task, NULL) != 0){
		perror("Error to create thread.");
		return 1;
	}
	if(pthread_join(t, (void**)&res) != 0){
		perror("Error to join thread.");
		return 2;
	}
	if(pthread_detach(t) == 0){
		perror("Error to detach thread.");
		return 3;
	}
	cout<<"Main res : "<<res<<endl;
	cout<<"res : "<<*res<<endl;
	//free(res); // use free to release memory
	delete res;
	return 0;
}
