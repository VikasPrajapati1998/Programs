#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
	int ib=0; 
	float cb=0;
	cin>>ib>>cb;
	if(ib%5==0 && cb>=(ib+0.5))
		cb -= (ib+0.5);
	cout<<fixed<<setprecision(2)<<cb;
	return 0;
}
