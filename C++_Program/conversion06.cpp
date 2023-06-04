#include <iostream>

using namespace std;

class Item;
class Product;

class Product{
	private:
		int m, n;
	public:
		Product(){	}
		void setData(int m, int n){
		this->m = m;
		this->n = n;
		}
		void showData(){
			cout<<"m = "<<m<<"   "<<"n = "<<n<<endl;
		}
		int getM();
		int getN();
};

int Product::getM(){return(m);}
int Product::getN(){return(n);}

class Item{
	private:
		int a, b;
	public:
		Item(){ }
		Item(Product p){
			a = p.getM();
			b = p.getN();
		}
		void setData(int a, int b){
			this->a = a;
			this->b = b;
		}
		void showData(){
		cout<<"a = "<<a<<"   "<<"b = "<<b<<endl;
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
