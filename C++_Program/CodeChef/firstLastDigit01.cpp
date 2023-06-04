#include <iostream>
using namespace std;
int main(void){
	int T=0;
	cin>>T;
	for(int i=0; i<T; i++){
		int n, ans=0, first=0;
		cin>>n;
		ans+=n%10;
		while(n>0){
			first = n%10;
			n/=10;
		}
		ans += first;
		cout<<ans<<endl;
	}
	
	return 0;
}
