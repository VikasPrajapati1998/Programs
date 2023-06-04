#include <iostream>
#include <string>
using namespace std;
// namespace creation
namespace mine{
    class Year{
        private:
            long yr;
        public:
            Year(){
                yr = 2000;
            }
            void changeYear();
    };
    
    class Sample;
    void fun();
}
void mine::Year::changeYear(){
    yr = 2000;
    cout<<"Year don't change"<<endl;
}
class mine::Sample{
    public:
        Sample();
        void showData();
};
mine::Sample::Sample(){
    cout<<"Sample ctor"<<endl;
}
void mine::Sample::showData(){
    cout<<"There is no data in Sample Class to show."<<endl;
}
void mine::fun(){
    cout<<"This is the fun function"<<endl;
}

int main(int argc, char *argv[])
{
    mine::Year y;
    y.changeYear();
    mine::fun();
    mine::Sample s;
    s.showData();
    return 0;	
}