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
    Sample s[4];
    void(Sample::*p[3])() = {&Sample::fun1, &Sample::fun2, &Sample::fun3} ;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            (s[i].*p[j])(); // we use .* because s[i] is an object not an pointer.
        }
    }
    return 0;
}