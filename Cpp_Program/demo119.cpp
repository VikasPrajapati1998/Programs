#include <iostream>
using namespace std;

int main(void){
	int i = 65; int *pi = &i;
	float f = 3.14; float *pf = &f;
	cout<<*pi<<", "<<*pf<<endl;
	pf = (float*)pi;
	cout<<*pi<<", "<<*pf<<endl;
	char *str;
	//str = reinterpret_cast<char*>(pi);
	str = (char*)pi;
	cout<<str<<endl;
	return 0;
}