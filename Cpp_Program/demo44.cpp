#include <iostream>
using namespace std;
class Sample{
    private:
        int data;
        static int i;
    public:
        Sample(){ data=0; }
        int changeData() const{     // const member function
            int sqr = data*data;
            //data = 10;  // error; modifiacation of any data member is not allow in const member function
            i = sqr;
            return sqr; 
        }
        void showData(){
            cout<<"Data = "<<data<<endl;
        }
        void showData() const{
            cout<<"Data = "<<data<<endl;
        }
        void printData() const; // Declaration
        void  add(Sample const &s, Sample const &t){
            data = s.data+t.data;
            //s.data = 2;     -error;
            //t.data = 7;     -error;
        }
        void getData(){
            cout<<"Enter data : ";
            cin>>data;
        }
        static void staticPrint(){
            cout<<i<<endl;
        }
};
int Sample::i = 0;
void Sample::printData() const{
    cout<<data<<endl;
    cout<<Sample::data<<endl;
}

int main(void){
    system("cls");
    const Sample s1;
    s1.changeData();
    s1.showData();
    s1.printData();
    Sample s2;
    s2.getData(); s2.showData();
    Sample s3;
    s3.getData(); s3.showData();
    Sample s4;
    cout<<"Sum : "; s4.add(s2, s3);
    s4.showData();
    int s = s4.changeData();
    cout<<"Squire of number is : "<<s<<endl;
    Sample::staticPrint();

    return 0;
}