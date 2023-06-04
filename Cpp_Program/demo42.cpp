#include <iostream>
using namespace std;
int main(void){
    system("cls");
    int *ptrInt = new int;
    void *ptrVoid = new int;
    void *p = NULL;
    *ptrInt = 836;
    // *ptrVoid = NULL;     //-error
    cout<<*ptrInt<<endl;
    int *ptr = new int;
    *ptr = NULL;    // warning:converting to non-pointer type int ot NULL.
    delete ptrInt, ptrVoid, ptr, p;

    return 0;
}