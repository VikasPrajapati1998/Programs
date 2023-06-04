#include <iostream>
using namespace std;

struct alpha{
    int i;
    float f;
};

class Sample{
    private:
        int i;
        float a;
        char ch;
        alpha p;
    public:
        Sample(int j, float b, char dh){
            i=j; a=b; ch=dh;
        }
        void Display_Data(){
            cout<<i<<", "<<a<<", "<<ch<<endl;
        }
        void Print_Data();
};

void Sample::Print_Data(){
    cout<<i<<", "<<a<<", "<<ch<<endl;
}

int main(void){
    system("cls");
    Sample s1(10, 3.14f, 'A');
    cout<<"s1 = "; s1.Display_Data();
    cout<<"Size of s1 = "<<sizeof(s1)<<endl;
    cout<<"s1 = "; s1.Print_Data();
    cout<<sizeof(int)<<", "<<sizeof(float)<<", "<<sizeof(char)<<", "<<endl;

    return 0;
}