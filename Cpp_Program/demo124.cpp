/*Macros v/s Template*/
#include <iostream>
using namespace std;
#define PI 3.14
#define SUM(a, b) (a+b)
#define MACRO_MIN(a, b) ((a<=b) ? a : b) // macros replace the value
template<class A, class B>
B temp_min(A a, B b){ return(a<=b) ? a : b; }
int main(int argc, char *argv[])
{
	int i=10, j=20;
	cout<<"(int, int)"<<endl;
	cout<<"macro = "<<MACRO_MIN(i, j)<<endl;
	cout<<"template = "<<temp_min(i, j)<<endl;
	
	int p=10; float q=7.34;
	cout<<"(int , float)"<<endl;
	cout<<"macro = "<<MACRO_MIN(p, q)<<endl;
	cout<<"template = "<<temp_min(p, q)<<endl;
	
	char x='A'; int y=67;
	cout<<"(char, int)"<<endl;
	cout<<"macro= "<<MACRO_MIN(x, y)<<endl;
	cout<<"template = "<<temp_min(x, y)<<endl;
	
	char l='A'; char m='F';
	cout<<"(char, char)"<<endl;
	cout<<"macro= "<<MACRO_MIN(l, m)<<endl;
	cout<<"template = "<<temp_min(l, m)<<endl;
	
	return 0;
}