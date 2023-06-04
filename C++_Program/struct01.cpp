#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct book{
	int bookid;
	char title[20];
	float price;
};

void display(book);
book input();

int main(void){
	book b1={101, "Let Us C", 340.00};
	
	book b2, b3;
	
	b2.bookid = b1.bookid;
	strcpy(b2.title, b1.title);
	b2.price = b1.price;
	
	b3 = b2;
	
	display(b1);
	display(b2);
	display(b3);
	
	book b4;
	b4 = input();
	display(b4);
	
	
	return 0;
}

book input(){
	book b;
	cout<<"Enter bookid, title, price : ";
	cin>>b.bookid>>b.title>>b.price;
	return b;
}

void display(book b){
	cout<<b.bookid<<" "<<b.title<<" "<<b.price<<"\n";
}

