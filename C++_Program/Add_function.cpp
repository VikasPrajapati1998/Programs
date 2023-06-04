#include <iostream>

using namespace std;

int add(int, int=0, int=0);

int main(void){
	int x, y, z;
	cout<<"Add Numbers : ";
	cin>>x>>y;
	cout<<"Sum is : "<<add(x, y, z);
	return 0;
}

int add(int x, int y, int z){
return(x+y+z);
}
