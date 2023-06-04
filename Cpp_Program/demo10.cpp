#include <iostream>
using namespace std;

struct employee{
    char name[50];
    union{
        int emptype;
        char grade[4];
    };
    int empid;
};

int main(int argc, char *argv[]){
    employee e1;
    e1.emptype = 3;
    e1.empid = 18254;
    cout<<e1.emptype<<endl<<e1.empid<<endl;

    employee e2 = {"Arjun Prajapati", 23, 18254};
    cout<<e2.name<<", "<<e2.emptype<<", "<<e2.empid<<endl;

    return 0;
}