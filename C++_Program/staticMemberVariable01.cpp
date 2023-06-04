/* Static Member Variable*/
#include <conio.h>
#include <iostream>

using namespace std;

class Account{
	public:
		int balance; //instance variable
		static float roi; //static member variable or class varible
	public:
		void setBalance(int b){
			balance = b;
		}
		void display(){
			cout<<"Balance : "<<balance<<"\n";
			cout<<"Roi : "<<roi;
		}
};

float Account:: roi=3.5f; // static member variable definition

int main(void){
	Account a1, a2;
	a1.setBalance(6);
	Account::roi=5.5f;
	a1.display();
} 
