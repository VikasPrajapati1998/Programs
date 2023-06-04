#include <iostream>
using namespace std;
int* fun();
int hello();
int hello(){
    printf("hello programmer\n");
}
int main()
{
   int *j;
   j = fun();
   cout<<*j<<endl;
   hello();
   cout<<*j<<endl;
   return 0;
}
int* fun(){
    int k = 35;
    return(&k);
}