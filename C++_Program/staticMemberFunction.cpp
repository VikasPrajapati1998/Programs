/*Static Member Function*/
#include <conio.h>
#include <iostream>

using namespace std;

class Account{
	private:
		int balance;
		static float roi; // static member variable
	public:
		void setBalance(int b){
			balance = b;
		}
		
		static void setRoi(float r){ // static member function
			roi = r;
		}
		
		void display(){
			cout<<"Balance : "<<balance<<"\n"<<"Roi : "<<roi<<"\n";
		}	
};

float Account:: roi = 2.5f;

int main(void){
	Account a1;
	a1.setBalance(6); // updating instance member variable
	a1.setRoi(3.5f); // Updating static variable or class variable
	a1.display();
	
	Account::setRoi(4.5f); //updating static variable or class variable
	
	Account a2;
	a2.Account::setBalance(9);
	a2.Account::setRoi(5.5f); // updating static variable or class variable
	a2.display();
	return 0;
} 
