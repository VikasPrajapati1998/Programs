#include <iostream>
using namespace std;
int main(void){
    int t=0;
    cin>>t;
    for(int i=0; i<t; i++){
        int n=0, f=0, l=0, ans=0;
        cin>>n;
        f = n%10;
        while(n>0){
            l = n%10;
            n/=10;
        }
        ans = f+l;
        cout<<ans<<endl;
    }
    return 0;
}
