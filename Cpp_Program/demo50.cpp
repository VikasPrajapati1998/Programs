#include <iostream>
#include <string.h>
using namespace std;

class Sample;
class Sample{
	private:
		int a;
		float f;
		Sample *p;
	public :
		void create(){
            a = 20;
			f = 6.28;
			p = new Sample;
			p->a = 10;
			p->f = 3.14;
			p->p = new Sample;
			p->p->a = 100;
			p->p->f = 10.54;
		}
		void showData(){
			cout<<a<<endl;
			cout<<f<<endl;
			cout<<p->a<<endl;
			cout<<p->f<<endl;
			cout<<p->p->a<<endl;
			cout<<p->p->f<<endl;
		}
};

int main(void){
	system("cls");
	Sample s1;
	s1.create();
	s1.showData();
	return 0;
}
