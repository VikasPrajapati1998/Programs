#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s1="Hello";
	string s2("User");
	string s3 = string("Program");
	string s4;
	s4 = "Code";
	string s5;
	s5 = s1+s2;
	string s6 = "Character";
	s6 += s4;
	cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
	cout<<s5<<endl;
	cout<<s6<<endl;
	
	string s7;
	cout<<"Enter a string : ";
	cin>>s7;
	cout<<s7<<endl;
	
	string s8="hello";
	char str[]="user";
	string s9;
	s9 = s8+str;
	cout<<s9<<endl;
	
	return 0;
}
