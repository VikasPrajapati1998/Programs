#include <iostream>
using namespace std;
int main(void){
	int n=0, k=0, t=0, count=0;
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>t;
		if(t%k==0)
			count++;
	}
	cout<<count;
	
	return 0;
}
