#include <iostream>
#include <vector>

using namespace std;

int main(void){
	vector <int> v1;
	cout<<"Capacity : "<<v1.capacity()<<", "<<"Size : "<<v1.size()<<endl;
	for(int i=0; i<10; i++)
		v1.push_back(2*(i+1));
	cout<<"Capacity : "<<v1.capacity()<<", "<<"Size : "<<v1.size()<<endl;
	
	for(int i=0; i<v1.size(); i++)
		cout<<v1.at(i)<<" ";
	cout<<endl;
	
	cout<<"Front : "<<v1.front()<<endl;
	cout<<"Back : "<<v1.back()<<endl;
	
	
	return 0;
}
