#include <iostream>
using namespace std;

template<class X>
class ArrayList{
	private:
		struct ControlBlock{
			int capacity;
			X *arr_ptr;
		};
		
		ControlBlock *s;
		
	public:
		ArrayList(int capacity){
			s = new ControlBlock;
			s->capacity = capacity;
			s->arr_ptr = new X[s->capacity];
		}
		
		void AddElement(int index, X data){
			if(index>=0 && index<s->capacity)
				s->arr_ptr[index] = data;
			else
				cout<<"\nArray index is not valid";
		}
		
		void ViewElement(int index, X &data){
			if(index>=0 && index<s->capacity)
				data = s->arr_ptr[index];
			else
				cout<<"\nArray index is not valid";
		}
		
		void ViewList(){
			int i;
			for(i=0; i<s->capacity; i++)
				cout<<" "<<s->arr_ptr[i];
		}
	
};

int main(void){
	int data;
	ArrayList <int>lst1(4);
	lst1.AddElement(0, 32);
	lst1.AddElement(1, 41);
	lst1.AddElement(2, 57);
	lst1.AddElement(3, 93);
	lst1.ViewElement(0, data);
	lst1.ViewList();
	cout<<"\n"<<data;
	
	return 0;
}

