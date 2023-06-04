
#include <iostream>
using namespace std;

template <class X>
X max(X a){
	if(a>0)
		return a;
	else
		return 0;
}
int main(void){
	cout<<max(4)<<endl;
	cout<<max(4.3)<<endl;
	cout<<max(-7)<<endl;
	cout<<max(-4.8)<<endl;
	
	return 0;
}

