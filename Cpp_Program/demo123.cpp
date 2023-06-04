// Macros and their use
#include <iostream>
using namespace std;
#define PI 3.14
#define SUM(a, b) (a+b)
int main(int argc, char *argv[])
{
	int x=10, y=5, z=SUM(x, y); // z=SUM(x, y) ---> z=a+b;
	cout<<"(int) z (int, int) = "<<z<<endl;
	int x1=10; float y1=7.66, z1=SUM(x1, y1);
	cout<<"(float) z1 (int, float) = "<<z1<<endl;
	z = SUM(x1, y1);
	cout<<"(int) z (int, float) = "<<z<<endl;
	cout<<SUM(x1, y1)<<endl;
	float x2=5.76, y2=4.24, z2=SUM(x2, y2);
	cout<<z2<<endl;
	float y3=25.36, z3=SUM(PI, y3);
	cout<<z3<<endl;
	return 0;
}