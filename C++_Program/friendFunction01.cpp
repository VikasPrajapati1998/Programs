#include <iostream>

using namespace std;

class Alpha;
class Beta;

//===================================================================
class Alpha{
	private:
		int a;
	public:
		void setData(int x){
			a = x;
		}
		
		friend void showData(Alpha, Beta);
		
};

//==================================================================
class Beta{
	private:
		int b;
	public:
		void setData(int y){
			b = y;
		}
		
		friend void showData(Alpha, Beta);
};

//==================================================================

void showData(Alpha p, Beta q){
	cout<<p.a<<" "<<q.b<<"\n";
}

//=================================================================

int main(void){
	Alpha a1;
	a1.setData(5);
	
	Beta b1;
	b1.setData(4);
	
	showData(a1, b1);
	
	return 0;
}

