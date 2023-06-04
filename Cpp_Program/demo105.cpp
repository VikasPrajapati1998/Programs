#include <iostream>
using namespace std;

class Example;
class Example{
    private:
        int i;
        float j;
    public:
        Example(int i = 0, float j = 0.0f){
            this->i = i;
            this->j = j;
        }
        void showData(){
            cout<<i<<"  "<<j<<endl;
        }
        Example operator*(Example e){
            Example temp;
            temp.i = i*e.i;
            temp.j = j*e.j;
            return temp;
        }
};

int main(int argc, char *argv[])
{
	Example e1(10, 3.14f), e2(2, 1.5f), e3, e4, e5;
	cout<<"e1 = "; e1.showData();
	cout<<"e2 = "; e2.showData();
	e3 = e1*e2;    //ok
	cout<<"e3 = "; e3.showData();
	e4 = e1*2;    //ok
	cout<<"e4 = "; e4.showData();
	//e5 = 2*e1;    // not ok
	e5 = e1*e2*e3;
	cout<<"e5 = "; e5.showData();
	
	return 0;
}