#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,z,n,k;
    cin>>t;
    for(z=0;z<t;z++){
        cin>>n>>k;
        if(k>n){
            cout<<"NO"<<endl;
            continue;
        }
        if(n%2==0){
            if(k%2!=0){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                if(k<=sqrt(n)){
                    cout<<"YES"<<endl;
                    continue;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
        else{
            if(k%2==0){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                if(k<=sqrt(n)){
                    cout<<"YES"<<endl;
                    continue;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }          
        }
    }
    return 0;
}
