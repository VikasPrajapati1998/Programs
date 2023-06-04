#include <iostream>

using namespace std;

int sum (int n1, int n2, int n3=0, int n4=0);

int main(void){
    system("cls");
    int s1, s2, s3;
    s1 = sum(10, 20);
    s2 = sum(10, 20, 30);
    s3 = sum(10, 20, 30, 40);
    cout<<"sum(10, 20) "<<"s1 = "<<s1<<endl;
    cout<<"sum(10, 20, 30) "<<"s2 = "<<s2<<endl;
    cout<<"sum(10, 20, 30, 40) "<<"s3 = "<<s3<<endl;
    return 0;
}

int sum(int n1, int n2, int n3, int n4){
    int n = n1 + n2 + n3 + n4;
    return n;
}