#include <iostream>

using namespace std;

class Integer{
	private:
		int a;
	public:
		void setData(int x){
			a = x;
		}
		void showData(){
			cout<<"\n"<<a;
		}
		
		Integer operator++(){ // pre-increment
			Integer i;
			i.a= ++a;
			return(i);
		}
		
		Integer operator++(int){ //post-increment
			Integer i;
			i.a= a++;
			return(i);
		}
};

int main(void){
	cout<<"\nReal Data";
	Integer i1, i2;
	i1.setData(3);
	i1.showData();
	
	cout<<"\nPre - Increment";
	i2 = ++i1; // i2 = i1.operator++()
	i1.showData();
	i2.showData();
	
	cout<<"\nReal Data";
	Integer i3, i4;
	i3.setData(7);
	i3.showData();
	
	cout<<"\nPost - Increment";
	i4 = i3++;  // i4 = i3.operator++(1)
	i3.showData();
	i4.showData();
	
	return 0;
}
