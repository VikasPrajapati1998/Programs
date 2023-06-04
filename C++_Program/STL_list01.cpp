#include <iostream>
#include <list>
using namespace std;
int main(void){
	list <int> l1 {3, 6, 2, 7, 4, 5};
	cout<<l1.size()<<endl;
	list <int>:: iterator p=l1.begin();
	//-------------------------------------push
	l1.push_back(60);
	l1.push_front(10);
	p=l1.begin();
	while(p != l1.end()){
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	//------------------------------------pop
	l1.pop_back();
	l1.pop_front();
	p = l1.begin();
	while(p != l1.end()){
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	//-----------------------------------------sort()
	l1.sort();
	p = l1.begin();
	while(p != l1.end()){
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	//-------------------------------------------reverse()
	l1.reverse();
	p = l1.begin();
	while(p != l1.end()){
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	//------------------------------------------remove()
	l1.remove(5); // delete a particular value
	p = l1.begin();
	while(p != l1.end()){
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	//------------------------------------------clear()
	l1.clear(); //delete all list
	
	return 0;
}
