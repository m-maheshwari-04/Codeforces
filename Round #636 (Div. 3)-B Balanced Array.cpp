#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,i;
        cin>>n;
        if(n%4!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
            for(i=1;i<n-1;i+=2){
                cout<<i<<" ";
            }
            cout<<(n+(2*(n/4))-1)<<endl;
        }
    }
    return 0;
}