// istream class
#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

int main(int argc, char *argv[])
{
    char ch;
    cout<<endl<<"Enter a character : ";
    cin.get(ch);
    cout<<ch;
    cout.flush();
    
    cin.putback(ch);
    cin.get(ch);
    cout<<endl<<ch;
    
    cin.putback('c');
    cin.get(ch);
    cout<<endl<<ch;
    
    int count = cin.gcount();
    cout<<endl<<"Characters extracted in last get() = "<<count;
    
    // stuff stream with a Z
    cin.putback('Z');
    ch = cin.peek();
    cout<<endl<<ch;
    
    // Z is stillin stream
    cin.get(ch);
    cout<<endl<<ch<<endl;
    
    return 0;       	    	
}