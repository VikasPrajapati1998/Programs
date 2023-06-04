#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector <int> v1; // blank vector; Default capacity=0;
	vector <int> v2 {10, 20, 30}; // capacity = 3, 6, 12
	vector <string> v3 {"Saurabh", "Arjun"}; // capacity=2, 4, 8, 16
	vector <int> v4(4); // capacity=4;
	vector <int> v5(4, 10); // capacity=4  10,10,10,10;
	vector <string> s1(5, "Hello"); // capacity=5    "Hello", "Hello", "Hello", "Hello", "Hello"
	cout<<v2[0]<<endl;
	cout<<v2[1]<<endl;
	cout<<v2[2]<<endl;
	for(int i=0; i<5; i++)
		cout<<s1[i]<<" ";
	cout<<endl;
	for(int i=0; i<4; i++)
		cout<<v5[i]<<" ";
	cout<<endl;
	cout<<"Capacity of v1 : "<<v1.capacity()<<endl;
	cout<<"Capacity of v2 : "<<v2.capacity()<<endl;
	cout<<"Capacity of v3 : "<<v3.capacity()<<endl;
	cout<<"Capacity of v4 : "<<v4.capacity()<<endl;
	
	return 0;
}
