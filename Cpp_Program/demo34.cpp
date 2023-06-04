#include <iostream>
using namespace std;

int main(void){
    system("cls");
    // size of pointer always depend on system configuration not the type of variable
    // for 32bit system it will be 2 byte and for 64bit system 4 byte.
    int *ptr_int;
    float *ptr_float;
    char *ptr_char;

    cout<<sizeof(ptr_int)<<", "<<sizeof(ptr_float)<<", "<<sizeof(ptr_char)<<endl;
    return 0;
}