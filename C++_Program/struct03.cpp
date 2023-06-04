#include <iostream>

using namespace std;

struct book{
	private:	
		int bookid;
		char title[50];
		float price;
	
	public:
		void input(void){
			cout<<"Enter bookid, title, price : ";
			cin>>bookid>>title>>price;
		}
		
		void display(void){
			cout<<bookid<<" "<<title<<" "<<price<<"\n";
		}
};

int main(void){
	
	book b1;
	b1.input();
	b1.display();
	
	book b2[5];
	int i=0;
	for(i=0; i<5; i++){
		b2[i].input();
	}
	cout<<"\n\n";
	int j=0;
	for(j=0; j<5; j++){
		b2[j].display();
	}
	
	return 0;
}

