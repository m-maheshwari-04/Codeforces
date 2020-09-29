#include <iostream>
using namespace std;
 
int main(){
    long long int t,m,n;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n>=3){
            cout<<2*m<<endl;
        }
        else if(n==2){
            cout<<m<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}