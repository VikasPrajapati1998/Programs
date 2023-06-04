#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector <int> v1;
	cout<<"Capacity : "<<v1.capacity()<<", "<<"Size : "<<v1.size()<<endl;
	// Entering the value in vector
	for(int i=0; i<10; i++)
		v1.push_back(2*(i+1));
	cout<<"Capacity : "<<v1.capacity()<<", "<<"Size : "<<v1.size()<<endl;
	// Printing the value of vector
	for(int i=0; i<10; i++)
		cout<<v1[i]<<" ";
	cout<<endl;
	// -----------------------------------------------------------------------------
	v1.pop_back();
	cout<<"Capacity : "<<v1.capacity()<<", "<<"Size : "<<v1.size()<<endl;
	for(int i=0; i<10; i++)
		cout<<v1[i]<<" ";
	cout<<endl;
	// -----------------------------------------------------------------------------
	v1.pop_back();
	cout<<"Capacity : "<<v1.capacity()<<", "<<"Size : "<<v1.size()<<endl;
	for(int i=0; i<10; i++)
		cout<<v1[i]<<" ";
	cout<<endl;
	// -----------------------------------------------------------------------------
	cout<<"Capacity : "<<v1.capacity()<<", "<<"Size : "<<v1.size()<<endl;
	for(int i=0; i<v1.size(); i++)
		cout<<v1[i]<<" ";
	cout<<endl;
	// -----------------------------------------------------------------------------
	v1.clear();
	cout<<"Capacity : "<<v1.capacity()<<", "<<"Size : "<<v1.size()<<endl;
	
	return 0;
}
