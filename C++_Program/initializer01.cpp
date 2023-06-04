#include <iostream>

using namespace std;

class Dummy;

class Dummy{
	private:
		int a, b;
		const int x;
		int &y;
	public:
		Dummy(int &n):a(5), b(7), x(10), y(n){ }
		void setData(int a, int b){
			this->a = a;
			this->b = b;
		}
		void showData(){
			cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
			cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
		}
};

int main(void){
	int m = 14;
	Dummy d1(m);
	d1.showData();
	return 0;
}
