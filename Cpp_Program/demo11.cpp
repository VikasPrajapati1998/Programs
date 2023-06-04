#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    // typecasting
    int y (1001), j {365}, n;
    n = y * (long)j; // C style typecasting also support c++
    cout<<n<<endl;
    n = y * long(j); // C++ style
    cout<<n<<endl;

    //void pointer
    void *p;
    char *s;
    p = s;
    s = (char *)p;

    return 0;

}