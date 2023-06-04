#include <iostream>
#include <string.h>
#include <typeinfo>

using namespace std;

class Sample;
class Sample{
	private:
		int a;
	public :
	Sample(){
		cout<<"Constructor run."<<endl;
	}
	Sample(Sample &s){
		cout<<"Copy Constructor."<<endl;
	}
	void setData(int a){
		this->a = a;
		showData();
	}
	void showData(){
		cout<<a<<endl;
	}
};

int main(void){
	system("cls");
	int a = 0;
	cout<<"Enter a number : "; cin>>a;
	for(int i=1; i<=10; i++)
		cout<<i<<" x "<<a<<" = "<<a*i<<endl;
	
	return 0;
}
