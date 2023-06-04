#include <iostream>
using namespace std;

class Alpha;
class Beta;

class Alpha{
	private:
		int a;
	
	public:
		Alpha(){ //constructor
		cout<<"I'm Alpha.\n";
		}
};

class Beta : public Alpha{
	public:
		Beta():Alpha(){ //constructor
		cout<<"I'm Beta.\n";
		}
};

int main(void){
	Beta obj;
	
	return 0;
}
