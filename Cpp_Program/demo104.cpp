#include <iostream>
#include <iomanip>
using namespace std;
struct key{
    char ch;
    int val;
};
key z[] = {
    {'M', 1000}, {'D', 500}, {'C', 100},
    {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}
};
int main(int argc, char *argv[])
{
	cout<<"size z = "<<sizeof(z)<<endl
	        <<"size z[0] = "<<sizeof(z[0])<<endl;
	int sz = sizeof(z)/sizeof(z[0]);
	cout<<sz<<endl;
	return 0;
}