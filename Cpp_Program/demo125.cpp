#include <iostream>
#include <typeinfo>
using namespace std;
template<class R, class F, class S>
R fun(F a, S b, R r=0){
    r = a+b;
    return r;
}
int main(int argc, char *argv[]){
	int x=5; float y=25.87;
	double z;
	z = fun(x, y, z);
	cout<<z<<endl;
	cout<<typeid(fun(x, y, z)).name()<<endl;
	return 0;	
}