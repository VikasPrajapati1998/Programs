#include <iostream>
using namespace std;

int main(void){
	int *ptr = new int;
	*ptr = 5;
	cout<<*ptr<<endl;
	delete ptr;
	
	float *p = new float;
	*p = 6.7;
	cout<<*p<<endl;
	delete p;
	
	int *arr_ptr = new int[5]; //initializing array memory dynamically.
	
	int i;
	for(i=0; i<5; i++){
		cout<<"Enter Value "<<i<<" : ";
		cin>>arr_ptr[i];
	}
	
	for(i=0; i<5; i++){
		cout<<arr_ptr[i]<<endl;
	}
	
	delete []arr_ptr; //deleting array memory.
	
	return 0;
}
