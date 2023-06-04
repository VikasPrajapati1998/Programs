#include <iostream>
#include <array>

using namespace std;

int main(void){
	array <int, 5> arr = {10,20,30,40,50};
	cout<<arr.at(2)<<endl;
	cout<<arr[3]<<endl; // [] operator
	cout<<arr.front()<<endl; // first value of array
	cout<<arr.back()<<endl; // last value of array
	cout<<arr.size()<<endl; // size of array
	arr.fill(13); // change all value with one number
	for(int i=0; i<5; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	//----------------------------------------------------------------------
	// swaping of array of same type and same size
	array <int, 5> arr1 = {1,2,3,4,5};
	array <int, 5> arr2 = {2,4,6,8,10};
	for(int i=0; i<5; i++)
		cout<<arr1[i]<<" ";
	cout<<endl;
	for(int i=0; i<5; i++)
		cout<<arr2[i]<<" ";
	cout<<endl;
	arr1.swap(arr2);
	for(int i=0; i<5; i++)
		cout<<arr1[i]<<" ";
	cout<<endl;
	for(int i=0; i<5; i++)
		cout<<arr2[i]<<" ";
	
	return 0;
}

