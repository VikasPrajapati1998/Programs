#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){
	//system("cls");
	int t=0, n=0, sum=0;
	cout<<"Enter number of test case : ";
	fflush(stdin);
	cin>>t;
	while(t--){
		sum=0;
		cout<<"Enter the size of array : ";
		fflush(stdin);
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++){ cin>>arr[i]; }
		for(int i=0; i<n; i++){ sum=sum+arr[i]; }
		if(sum==0){cout<<1<<endl;}
		else{cout<<0<<endl;}
	}
	return 0;
}
