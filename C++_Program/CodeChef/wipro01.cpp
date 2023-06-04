#include<iostream>
using namespace std;
int main(void){
	int bill=0, reward=0;
	cout<<"Enter Bill : ";
	cin>>bill;
	while(bill>0){
		int n=bill%10;
		if(n%2!=0)
			reward += n;
		bill /= 10;
	}
	cout<<reward<<endl;
	return 0;
}
