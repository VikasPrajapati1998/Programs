#include <iostream>
using namespace std;
class Sample;
ostream& tab(ostream &o){o<<'\t'; return o; }
class Sample{
    public:
        void fun1(){cout<<this<<tab<<"Fun1 function."<<endl; }
        void fun2(){cout<<this<<tab<<"Fun2 function."<<endl; }
        void fun3(){cout<<this<<tab<<"Fun3 function."<<endl; }
};
int main(int argc, char *argv[]){
    Sample s1;
    void(Sample::*p1)() = &Sample::fun1;
    (s1.*p1)();
    return 0;
}