#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int arr[1000];
    for(int i=0; i<1000; i++)
        arr[i] = 2*i;
     // searching for element;
     int n=0;
     cout<<"Enter a number to find : ";
     cin>>n;
     int l = 999;
     int var = 0;
     for(int i=0; i<1000; i++){
         if(arr[i]==n)
             var = i;
          else if(arr[l-i]==n)
              var = (l-i);
          else
              continue;
     }       	
	 if(var != 0)
	     cout<<"Value find at the index : "<<var<<endl;
	  else
	      cout<<"Value not found."<<endl;
	return 0;
}
