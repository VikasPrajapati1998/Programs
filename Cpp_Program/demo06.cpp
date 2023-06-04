#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    auto i (3);
    decltype (i) j;
    j = 7;
    cout<<j<<endl;
    return 0;
}