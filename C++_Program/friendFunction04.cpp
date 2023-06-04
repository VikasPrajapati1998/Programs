#include <iostream>

using namespace std;

class Alpha;
class Beta;

class Alpha{
	private:
		int a;
	public:
		void setData(int x){
			a = x;
		}
		void showData(){
			cout<<a<<"\n";
		}
		
		friend void showData();
};

class Beta{
	private:
		int b;
	public:
		void setData(int x){
			b = x;
		}
		void showData(){
			cout<<b<<"\n";
		}
		
		friend void showData();
};

void showData(){
		cout<<"This is friend of both class."<<"\n";
}

int main(void){
	Alpha a1;
	a1.setData(5);
	a1.showData();
	showData();
	
	Beta b1;
	b1.setData(7);
	b1.showData();
	showData();
	
	return 0;
}
