#include <iostream>
using namespace std;
int main()
{
	for(int i=0; i<=10; i++){
	    if(i==5){
	        break;
	        cout<<"Break"<<endl;
	    }
	    else{
	        cout<<i<<endl;
	    }
	     cout<<"Continue"<<endl;
	}
	     
	     return 0;
}