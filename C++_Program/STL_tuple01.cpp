#include <iostream>
#include <tuple>

using namespace std;

int main(void){
	tuple <string, int, int> t1;
	t1 = make_tuple("Rahul", 16, 54);
	cout<<get<0>(t1)<<", ";
	cout<<get<1>(t1)<<", ";
	cout<<get<2>(t1)<<endl;
	
	return 0;
}

