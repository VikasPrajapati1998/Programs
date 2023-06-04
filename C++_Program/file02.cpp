//File handling 
// Writing in file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void){
	ofstream fout;
	fout.open("data/file02.txt", ios::app);
	char message[100];
	cout<<"Write Your Message Here : ";
	gets(message);
	fout<<message<<"\n";
	fout.close();
	cout<<"Done!"<<endl;
	return 0;
}
