//Dynamic Constructor
#include <iostream>
using namespace std;

class Pinch;

class Pinch{
	private:
		int a, b;
		int *p;
		int *ptr;
	public:
		Pinch(){ // dynamic constructor
			p = new int;
			ptr = new int[5];
		}
		
		void setData(int a, int b, int c){
			this->a = a;
			this->b = b;
			*p = c;
		}
		void showData(){
			cout<<a<<" "<<b<<" "<<*p<<endl;
		}
		
		virtual ~Pinch(){
			delete p;
			delete []ptr;
		}
};

int main(void){
	int i, j, k;
	cout<<"Enter your numbers : ";
	cin>>i>>j>>k;
	Pinch p1;
	p1.setData(i, j, k);
	p1.showData();
	
	return 0;
}
