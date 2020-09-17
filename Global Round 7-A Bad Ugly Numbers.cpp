#include <iostream>
using namespace std;
 
int main(){
    int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        while(n>1)
        {
            cout<<"9";
            n--;
        }
        cout<<"8"<<endl;
    }
    return 0;
}