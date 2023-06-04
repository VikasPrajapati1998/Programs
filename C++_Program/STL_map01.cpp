#include <iostream>
#include <map>
using namespace std;
int main(void){
	// creating map
	map <int, string> customer;
	// assigning key and value pair
	customer[100] = "Gajendra";
	customer[123] = "Dilip";
	customer[145] = "Aditya";
	customer[171] = "Shahid";
	customer[200] = "Rajesh";
	
	// creating map
	map <int, string> c {
		{100, "Gajendra"},
		{123, "Dilip"},
		{145, "Aditya"},
		{171, "Shahid"},
		{200, "Rajesh"}
	};
	
	// printing value one by one ------------------- []
	cout<<customer[100]<<endl;
	cout<<customer[123]<<endl;
	cout<<customer[171]<<endl;
	cout<<endl;
	
	// iterator
	map <int, string>:: iterator i = customer.begin();
	while(i != customer.end()){
		cout<<i->first<<" : "<<i->second<<endl;
		i++;
	}
	cout<<endl;
	
	//--------------------------at()
	cout<<customer.at(145)<<endl;
	//--------------------------size()
	cout<<customer.size()<<endl;
	//--------------------------empty() checking 
	cout<<customer.empty()<<endl;
	//-------------------------insert() adding map
	customer.insert({207, "Arjun"});
	cout<<customer[207]<<endl;
	customer.insert(pair<int, string>(214, "Hritik"));
	cout<<customer[214]<<endl;
	
	i=customer.begin();
	while(i != customer.end()){
		cout<<i->first<<" : "<<i->second<<endl;
		i++;
	}
	cout<<endl;
	//------------------------clear() delete all pair
	customer.clear();
	cout<<customer.size()<<endl;
	
	return 0;
}
	
