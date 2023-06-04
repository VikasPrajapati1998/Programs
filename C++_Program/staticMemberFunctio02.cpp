#include <iostream>

using namespace std;

class Student;

class Student{
	private:
		static int roll_no;
		int maths, physics, chemistry, english;
	
	public:
		static void setRollNo(int r){
			roll_no = r;
		}
		
		void setData(int m, int p, int c, int e){
			maths = m;
			physics = p;
			chemistry = c;
			english = e;
		}
		
		void showData(){
			cout<<roll_no<<"\n";
			cout<<maths<<" "<<physics<<" "<<chemistry<<" "<<english<<"\n";
		}
};

int Student::roll_no;

int main(void){
	Student s1;
	s1.setRollNo(18254);
	s1.setData(36, 75, 65, 70);
	s1.showData();
	Student::setRollNo(54);
	s1.Student::showData();
}
