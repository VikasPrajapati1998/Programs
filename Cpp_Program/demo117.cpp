// Typecasting in c++
// const_cast
#include <iostream>
using namespace std;
void display(char*);
int main(void){
	const char *ptr = "Lord Ram of Ayodhya.";
	display(const_cast<char*>(ptr));
	return 0;
}
void display(char *p){
    cout<<p<<endl;
}