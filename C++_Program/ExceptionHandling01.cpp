#include <iostream>

using namespace std;

int main(void){
	int i;
	cout<<"Enter a number : ";
	cin>>i;
	try{
		if(i<0)
			throw 1;
		if(i==0)
			throw 2;
		cout<<"Number is positive number"<<endl;
	}
	
	catch(int error){
		if(error==1)
			cout<<"Number is negative."<<endl;
		else if(error==2)
			cout<<"Zero Divisible error."<<endl;
		else
			cout<<"Something unexpected error."<<endl;
	}
	
}

