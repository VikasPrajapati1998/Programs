#include <iostream>
using namespace std;

int main(void){
    system("cls");
    // static memory allocation (stack);    :- Memory allocation at the time of compilation.
    int i;
    float f;
    char c;

    // Use allocated entities
    i = 10;
    f = 5.23;
    c = 'a';

    cout<<i<<", "<<f<<", "<<c<<endl;

    // dynamic memory allocation (heap);    :- Memory allocation at the time of execution.
    int *ptr_int = new int;
    float *ptr_float = new float;
    char *ptr_char = new char;

    // Use allocated entities
    *ptr_int = 7;
    *ptr_float = 3.7;
    *ptr_char = 'p';

    cout<<*ptr_int<<", "<<*ptr_float<<", "<<*ptr_char<<endl;
    cout<<ptr_int<<", "<<ptr_float<<", "<<ptr_char<<endl;

    // eliminate allocated entities
    delete ptr_int;
    delete ptr_float;
    delete ptr_char;

    cout<<*ptr_int<<", "<<*ptr_float<<", "<<*ptr_char<<endl;
    
    return 0;
}