#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream fin;
    fin.open("test.txt");
    char ch;
    while(fin){
       	//fin>>ch;
       	fin.get(ch);
       	//ch = fin.get();
       	cout<<ch;
    }
    fin.close();
    return 0;
}