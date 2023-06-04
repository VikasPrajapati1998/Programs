#include <iostream>
using namespace std;

void Display(char *);
void Display(const char *);

int main(void){
    system("cls");
    char *ch1 = "Harsh";
    const char *ch2 = "Arjun";
    Display(ch1);
    Display(ch2);
    return 0;
}

void Display(char *ch){
    cout<<ch<<endl;
}

void Display(const char *ch){
    cout<<ch<<endl;
}