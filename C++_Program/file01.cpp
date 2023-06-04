//File handling 
// Writing in file
#include <iostream>
#include <fstream>

using namespace std;

int main(void){
	ofstream fout;
	fout.open("data/file01.txt", ios::out);
	fout<<"Hello Programmer";
	fout<<"\n";
	fout<<"Read this notes carefully for your future.";
	fout.close();
	cout<<"Done!"<<endl;
	return 0;
}
