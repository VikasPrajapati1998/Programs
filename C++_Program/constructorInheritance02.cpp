#include <iostream>
using namespace std;

class Alpha;
class Beta;

class Alpha{
	private:
		int a;
	
	public:
		Alpha(int k){ //constructor
		a = k;
		cout<<a<<endl;
		}
		
		void showData(){
			cout<<a;
		}
		
		~Alpha(){
			cout<<a<<"I'm Alpha D"<<endl;
		}
};

class Beta : public Alpha{
	private:
		int b;
	public:
		Beta(int x):Alpha(x){ //constructor
		b = x;
		cout<<"I'm Beta.\n";
		}
		
		~Beta(){
			cout<<b<<"I'm Beta D"<<endl;
		}
};

int main(void){
	Beta obj(5);
	cout<<"--------------------------------------\n";
	Alpha a(7);
	cout<<"--------------------------------------\n";
	Beta b1(3);
	cout<<"--------------------------------------\n";
	return 0;
}
