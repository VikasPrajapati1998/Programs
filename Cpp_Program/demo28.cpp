#include <iostream>
using namespace std;

class Index{
    private:
        int count;
    public:
        Index(){
            count=0;
        }
        Index(int i){
            count=i;
        }
        Index operator++(){     // pre-increment
        /*
            Index t;
            t=++count;
            return t;
        */
            ++count;
            return *this;
        }
        
        Index operator++(int){      // post-increment
        /*
            Index t;
            t = count++;
            return t;
        */
        /*
            Index temp(count);      // call 1-argument constructor  & temp.count=0 assign
            count++;
            return temp;
        */
        
            Index temp;
            temp.count = count;
            ++count;
            return temp;
        
        /*
            Index temp;     // call 0-argument constructor
            temp.count = count;
            count++;
            return temp;
        */
        }
        void showData(){
            cout<<count<<endl;
        }
};

int main(void){
    system("cls");
    Index c, d, e, f;
    cout<<"c = "; c.showData();
    d = ++c;    // c.operator++();
    cout<<"c = "; c.showData();
    cout<<"d = "; d.showData();

    cout<<"e = "; e.showData();
    f = e++;    // c.operator++(0);
    cout<<"e = "; e.showData();
    cout<<"f = "; f.showData();
    return 0;
}