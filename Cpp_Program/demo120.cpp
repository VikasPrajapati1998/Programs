#include <iostream>
using namespace std;

struct Sample{
    int a;
    float b;
};

int main(void){
	// Normal Structure use	
	Sample s1;
	s1.a = 10; s1.b = 2.73f;
	cout<<s1.a<<", "<<s1.b<<endl;
	Sample *ptr;
	ptr = &s1;
	cout<<ptr->a<<", "<<ptr->b<<endl;
	
	// Pointers to Member
	int Sample::*p1 = &Sample::a; // set a pointer for all structure variable to access a
	float Sample::*p2 = &Sample::b; // set a pointer for all structure variable to access b
	
	Sample s = {13, 74.98f}; // normal creation of struct variable
	cout<<s.a<<", "<<s.b<<endl;
	cout<<s.*p1<<", "<<s.*p2<<endl;
	
	s.*p1 = 43; s.*p2 = 14.90f; // updation of struct variable
	cout<<s.a<<", "<<s.b<<endl;
	cout<<s.*p1<<", "<<s.*p2<<endl;
	
	Sample *sp;
	sp = &s;
	cout<<sp->a<<", "<<sp->b<<endl;
	cout<<sp->*p1<<", "<<sp->*p2<<endl;
	
	sp->*p1 = 53; sp->*p2 = 71.456f; // updation of struct variable
	cout<<sp->a<<", "<<sp->b<<endl;
	cout<<sp->*p1<<", "<<sp->*p2<<endl;
	
	return 0;
}