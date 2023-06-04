// stream class
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    int i = 752;
    float a = 425;
    float b = 123.500328f;
    char str[] = "Dream. Then make it happen!";
     
    ios_base::fmtflags oldFlags;
    oldFlags = cout.flags();
    cout<<"Current flags = "<<cout.flags()<<endl;
    
    cout<<hex<<i<<endl;
    cout<<showbase<<hex<<i<<endl;
    cout<<uppercase<<showbase<<hex<<i<<endl;
    cout<<dec<<i<<endl;
    cout<<internal<<showpos<<setw(20)<<i<<endl;
    cout<<i<<endl;
    
    cout<<setfill('0');
    cout<<"Fill character : "<<cout.fill()<<endl;
    cout<<setw(40)<<str<<endl;
    cout<<right<<setw(40)<<str<<endl;
    cout<<left<<setw(40)<<str<<endl;
    
    cout.precision(6);
    cout<<"Precision : "<<cout.precision()<<endl;
    cout<<showpoint<<showpos<<a<<endl;
    cout<<fixed<<b<<endl;
    cout<<scientific<<b<<endl;
    
    cout<<"Current flags = "<<cout.flags()<<endl;
    cout.flags(oldFlags);
    cout<<"Current flags = "<<cout.flags()<<endl;
        
    return 0;       	    	
}