#include <iostream>

using namespace std;

int main(void){
	int i;
	cout<<"Enter a number : ";
	cin>>i;
	try{
		if(i<0)
			throw 1;
		else if(i==0)
			throw 2.5;
		else
			throw 'a';
		cout<<"Number is positive number"<<endl;
	}
	
	catch(...){
		cout<<"Something unexpected error."<<endl;
	}
	
}

