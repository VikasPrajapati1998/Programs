#include <iostream>
#include <array>

using namespace std;

template <class X> void print_array(int size, X a[]);
template <class X>
void print_array(int size, X a[]){
	for(int i=0; i<size; i++){
		cout<<a[i]<<" ";
	}
}

int main(void){
	int a[5]={10,20,30,40,50};
	print_array(5, a);
	cout<<endl;
	
	float f[4]={1.2, 2.3, 3.4, 4.5};
	print_array(4, f);
	cout<<endl;
	
	char c[7]={'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	print_array(7, c);
	cout<<endl;
	
	return 0;
}
