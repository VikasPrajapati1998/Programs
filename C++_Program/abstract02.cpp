#include <iostream>
#include <typeinfo>

using namespace std;

class A{
	private:
		virtual void fun()=0;
		
	protected:
		char *name;
		
	public:
		setName(char *name){
			this->name = name;
		}
		
};

class B : public A{
	private:
		void fun(){ }
		char *fname;
	public:
		setFname(char *fname){
			this->fname = fname;
		}
		showData(){
			cout<<name<<endl;
			cout<<fname<<endl;
		}
};

int main(void){
	B obj;
	char name[]="Arjun_Prajapati", fname[]="Ram_Pratap";
	obj.setName(name);
	obj.setFname(fname);
	obj.showData();
	
	return 0;
}
