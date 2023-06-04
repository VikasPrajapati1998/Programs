//Static Local Variable

#include <conio.h>
#include <iostream>

using namespace std;

void fun();

int main(){
	int i;
	cout<<"Static Ordinary\n";
	cout<<"X"<<"       "<<"Y"<<"\n";
	for(i=0; i<=7; i++)
		fun();
	return 0;
}

void fun(){
	static int x;
	int y = 0;
	cout<<x<<"       "<<y<<"\n";
	x++;
	y++;
}
