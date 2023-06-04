#include <iostream>

using namespace std;

class Dummy;

class Dummy{
	private:
		const float pi;
		int &r; // &r=n;
	public:
		Dummy(int &n):pi(3.14), r(n){ }
		
		void setData(int m){
			r = m;
		}
		void showData(){
			cout<<"pi = "<<pi<<" "<<"r = "<<r<<endl;
		}
};

int main(void){
	int x = 7;
	Dummy d1(x);
	
	d1.showData();
	cout<<"x = "<<x<<endl;
	
	cout<<"----------------------------------\n";
	
	d1.setData(9);
	d1.showData();
	cout<<"x = "<<x<<endl;
	
	return 0;
	
}
