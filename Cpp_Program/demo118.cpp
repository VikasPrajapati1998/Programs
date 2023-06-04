// Typecasting in c++
// const_cast
#include <iostream>
using namespace std;
void display(int*);
int main(void){
	const int c = 7;
	const int *ptr = &c;
	//display(ptr);  // error
	display(const_cast<int*>(ptr));
	cout<<"c = "<<c<<endl;
	cout<<"ptr = "<<*ptr<<endl;
	int *pt = const_cast<int*>(ptr);
	cout<<"pt = "<<*pt<<endl;
	*pt = 9;
	cout<<"pt = "<<*pt<<endl;
	cout<<"c = "<<c<<endl;
	return 0;
}
void display(int *p){
    cout<<"p = "<<*p<<endl;
    *p = 5;
    cout<<"p = "<<*p<<endl;
}