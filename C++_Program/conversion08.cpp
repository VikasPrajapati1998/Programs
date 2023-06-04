#include <iostream>
using namespace std;
class Item;
class Product;
class Item{
	private:
		int a, b;
	public:
		Item(){ }
		void setData(int x, int y)
		{a=x; b=y;}
		void showData()
		{cout<<"a = "<<a<<"   "<<"b = "<<b<<endl;}
};

class Product{
	private:
		int m, n;
	public:
		Product(){	}
		void setData(int x, int y)
		{m=x; n=y;}
		void showData()
		{cout<<"m = "<<m<<"   "<<"n = "<<n<<endl;}
		operator Item(){
			Item i;
			i.setData(m,n);
			return(i);
		}
};


int main(void){
	Item i1;
	Product p1;
	p1.setData(3,4);
	p1.showData();
	i1=p1;
	i1.showData();
	return 0;
}
