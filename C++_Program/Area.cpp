/* Default argument*/
#include <conio.h>
#include <iostream>

using namespace std;

float area(int);
int area(int, int);

int main(void){
	system("cls");
	int a, b, r, ar=0;
	int choice;
	cout<<"Enter Your Choice\n1. Circle\n2. Rictangle\nChoice : ";
	cin>>choice;
	if(choice==1){
		cout<<"Enter the radius of circle : ";
		cin>>r;
		ar = area(r);
		cout<<"Area of circle : "<<ar<<endl;
	}
	else if(choice==2){
		cout<<"Enter the length and breth of rictangle : ";
		cin>>a>>b;
		ar = area(a, b);
		cout<<"Area of rictangle : "<<ar<<endl;
	}
	else
		cout<<"Wrong Input"<<endl;
	
	cout<<"\nDo You want run program again?"<<endl<<"If yes then press y else press n."<<endl<<"Enter your desire : ";
	char run=0;
	cin>>run;
	if(run=='y')
		main();
	
	return 0;
}

int area(int x, int y){
	return(x*y);
}

float area(int r){
	return(3.14*r*r);
}

