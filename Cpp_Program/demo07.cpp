#include <iostream>
#include <string.h>
using namespace std;
struct employee{
        char name[50];
        int age;
    };
    union data{
        char ch[2];
        int i;
    };
    enum status {married, unmarried, devorced};

int main(int argc, char *argv[]){
    //structure, union and enum syntax
    employee e;
    data d;
    status s;

    struct employee e2;
    union data d2;
    enum status s2;

    strcpy(e.name, "Arjun Prajapati");
    e.age = 24;
    d.i = 45000;
    puts(e.name);
    cout<<e.age<<endl;
    cout<<d.i<<endl;

    return 0;
}