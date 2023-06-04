#include <iostream>

using namespace std;
ostream& tab(ostream &obj);
ostream& endl(ostream &obj);
ostream& tab(ostream &obj){
    return obj<<'\t';
}
ostream& endl(ostream &obj){
    return obj<<'\n';
}
int main(int argc, char *argv[])
{
    cout<<"Hello user";
    cout<<tab<<tab;
    cout<<"Programmer"<<tab<<"Don't Panic"<<endl;
    cout.operator<<(tab);
    cout<<"Brave Programmer";
    cout.operator<<(endl);
    cout<<"Worrier Programmer";
    return 0;	
}