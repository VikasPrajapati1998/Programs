// void pointers
#include <iostream>
#include <stdio.h>

using namespace std;
int main(void){
    void *p;
    char *s;
    p = s;
    s = (char*) p;
    cout<<&p<<" "<<&s<<endl;
    printf("%u %u", &p, &s);
    return 0;
}