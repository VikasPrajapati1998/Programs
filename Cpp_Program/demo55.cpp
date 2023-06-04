#include <iostream>
#include <string.h>
#include <string>
#include <cstdlib>
#include <typeinfo>

using namespace std;

class String;
class String{
    private :
        char str[20];
    public :
        String(){   // default ctor.
            str[0] = '\0';
        }
        String(char* s){    // copy ctor.
            strcpy(str, s);
        }
        String(int a){      // arg ctor.
            itoa(a, str, 10);
        }
        operator int(){     // operator int().
            int l=strlen(str)-1, num=0, k=1;
            while(l>=0){
                num = num + (str[l] - 48) * k;
                l--; k *= 10;
            }
            return num;
        }
        void displayData(){
            cout<<str<<endl;
        }
};

int main(void){
    system("cls");
    String s1 = 123;
    cout<<"s1 = ";
    s1.displayData();

    s1 = 150;
    cout<<"s1 = ";
    s1.displayData();
    //cout<<endl<<typeid(s1).name()<<endl;
    
    String s2("123");
    int i = int(s2);
    cout<<"i = "<<i<<endl;

    String s3("456");
    i = s3;
    cout<<"i = "<<i<<endl;

    return 0;
}