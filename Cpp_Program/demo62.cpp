// string view
#include <iostream>

using namespace std;

static uint32_t alloc = 0;

void* operator new(size_t s){
	//alloc++;
	//cout<<"allocated "<<s<<endl;
	return malloc(s);
}

int main(void){
	string str = "Hello User";
	cout<<str<<endl;
	std::string str_1{"Hello !!, This is CppNuts."};
	std::string str_2{str_1.substr(0, 5)};
	//std::string_view str_2{str_1};
	std::string str_3{str_2};
	
	
	cout<<str_1<<endl
		<<str_2<<endl
		<<str_3<<endl;
	
	return 0;
}