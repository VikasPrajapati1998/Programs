#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
int main() {
	vector <int> a = {5,3,7,4,9,6,3,2,5,4};
	sort(a.begin(),a.end());
	for(int x : a)
	    cout<<x<<endl;
	return 0;
}





