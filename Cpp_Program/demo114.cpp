// Typecasting in C++
// 1. Normal cast
#include <iostream>
using namespace std;
int main(void)
{
   int i = 32;
   float f = 25.24f;
   long l= 98765;
   double d = 5678.89;
   cout<<i<<"  "<<f<<"  "<<l<<"  "<<d<<endl;
   i = f; l = d;
   cout<<i<<"  "<<f<<"  "<<l<<"  "<<d<<endl;
   f = d;
   cout<<f<<" "<<d<<endl;
   i = 32; f = 25.24f; l= 98765; d = 5678.89;
   f = i; d = l;
   cout<<i<<"  "<<f<<"  "<<l<<"  "<<d<<endl;
   i = 32; f = 25.24f; l= 98765; d = 5678.89;
   f = l; i = d;
   cout<<i<<"  "<<f<<"  "<<l<<"  "<<d<<endl;
   i = 32; f = 25.24f; l= 98765; d = 5678.89;
   i = int(f); l = long(d);  // c++ style
   cout<<i<<"  "<<f<<"  "<<l<<"  "<<d<<endl;
   i = 32; f = 25.24f; l= 98765; d = 5678.89;
   i = (int)f; l = (long)d; // c style
   cout<<i<<"  "<<f<<"  "<<l<<"  "<<d<<endl;
   return 0;     	
}