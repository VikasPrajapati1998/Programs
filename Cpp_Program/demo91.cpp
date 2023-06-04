#include <iostream>
#include <climits>
using namespace std;
ostream& ostream::operator<<(ostream &(*_f)(ostream&)){
    return (*_f)(*this);
}
int main(int argc, char *argv[])
{
    cout<<"Hello user"<<endl;
    
    return 0;	
}