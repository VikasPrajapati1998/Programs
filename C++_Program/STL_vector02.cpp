#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector <int> v1;
	cout<<"Capacity : "<<v1.capacity()<<endl;
	v1.push_back(10);
	cout<<"Capacity : "<<v1.capacity()<<endl;
	v1.push_back(20);
	cout<<"Capacity : "<<v1.capacity()<<endl;
	v1.push_back(30);
	cout<<"Capacity : "<<v1.capacity()<<endl;
	v1.push_back(40);
	cout<<"Capacity : "<<v1.capacity()<<endl;
	v1.push_back(50);
	cout<<"Capacity : "<<v1.capacity()<<endl;
	
	for(int i=0; i<v1.capacity(); i++)
		cout<<v1[i]<<" ";
	
	return 0;
}
