#include <iostream>
using namespace std;

// structure declaration
struct Employee{
    string name;
    int age;
    float salary;
};

int main(void){
    system("cls");
    // static memory allocation
    int num[25];
    Employee e;

    // dynamic memory allocation
    int *ptrInt = new int[25];
    Employee *ptrEmp = new Employee;

    // use allocated entities
    ptrInt[0] = 35;
    ptrInt[20] = 40;

    // insert value in array
    for(int i=0; i<25; i++){
        *(ptrInt+i) = i+1;
    }

    // printing value of array
    for(int i=0; i<25; i++){
        if(i%5==0)
            cout<<endl;
        cout<<ptrInt[i]<<", ";
    }
    cout<<endl;
    for(int i=0; i<25; i++){
        if(i%5==0)
            cout<<endl;
        cout<<*(ptrInt+i)<<", ";
    }
    cout<<endl<<endl;

    // printing structure elements using pointer
    ptrEmp->name = "Sanjay";
    ptrEmp->age = 24;
    ptrEmp->salary = 50000.00;

    cout<<ptrEmp->name<<endl;
    cout<<ptrEmp->age<<endl;
    cout<<ptrEmp->salary<<endl;
    cout<<endl;

    // eliminate allocated entities
    delete []ptrInt;
    delete ptrEmp;

    return 0;
}
