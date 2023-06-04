#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct book{
	int bookid;
	char title[20];
	float price;
	
	/*Methods*/
	
	void input(){
		cout<<"Enter bookid, title, price : ";
		cin>>bookid>>title>>price;
	}
	
	void display(){
		cout<<bookid<<" "<<title<<" "<<price<<"\n";
	}
	
};

book input();

int main(void){
	book b1={101, "Let Us C", 340.00};
	
	book b2, b3;
	
	b2.bookid = b1.bookid;
	strcpy(b2.title, b1.title);
	b2.price = b1.price;
	
	b3 = b2;
	
	b1.display();
	b2.display();
	b3.display();
	
	book b4;
	b4.input();
	b4.display();
	
	
	return 0;
}

