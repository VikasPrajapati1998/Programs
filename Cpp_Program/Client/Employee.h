// Employee.h - Class declaration
// This file declares the Employee class without revealing the implementations of its member functions
#include <string>
using namespace std;

class Employee{
    // data member
    private:
        string name;
        int age;
    // member function
    public:
        Employee();     // default constructor
        Employee(string n, int a);  // 2-argument constructor
        void getData();
        void showData();
};

