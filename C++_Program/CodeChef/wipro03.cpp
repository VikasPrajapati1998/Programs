#include <bits/stdc++.h>
using namespace std;
int main(void){
	int t=0;
	cout<<"Enter number of test : ";
	cin>>t;
	static vector <int> v(t);
	for(int i=0; i<t; i++){
		int n=0;
		cin>>n;
		v[i]=n;
	}
	for(int x : v){
		cout<<x<<" ";
	}
	cout<<endl;
	//-----------------------------------------
	static vector <int> v1(t);
	for(int i=0; i<(t-1); i++){
		int sum=0;
		sum=v[i]+v[i+1];
		v1[i]=sum;
	}
	for(int x : v1){
		cout<<x<<" ";
	}
	return 0;
}

