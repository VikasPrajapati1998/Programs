#include <iostream>
#include <iomanip>
#include <strstream>
using namespace std;
int main(int argc, char *argv[])
{
	char ch = 'Z';
	int i = 350;
	float a = 3.141528f;
	char title[] = "strstream at work";
	
	ostrstream s;
	s<<"ch = " <<ch<<endl
	  <<"i = " <<hex<<uppercase<<i<<endl
	  <<"a = " <<fixed<<a<<endl
	  <<"title = "<<title<<ends;
	
	cout<<s.str()<<endl;
	
	return 0;
}