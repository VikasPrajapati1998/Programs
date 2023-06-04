#include <iostream>
using namespace std;

template <class X, class Y>
X max(X a, Y b){
	if(a>b)
		return a;
	else
		return b;
}
int main(void){
	cout<<max(4, 5)<<endl;
	cout<<max(4.3, 5.8)<<endl;
	cout<<max(4.8, 7)<<endl;
	cout<<max(4.8, 3)<<endl;
	cout<<max(4, 3.4)<<endl;
	
	return 0;
}

