#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int s=4;
        while((s-1)<=n){
            if(n%(s-1)==0){
                cout<<n/(s-1)<<endl;
                break;
            }
            s=s*2;
        }
    }
    return 0;
}