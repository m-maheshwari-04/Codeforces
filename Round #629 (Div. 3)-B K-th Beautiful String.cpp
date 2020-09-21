
#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        unsigned long int k;
        cin>>n>>k;
        int n1,n2,i,sum=1;
        for(n1=1;;n1++){
            if(k<=sum){
                break;
            }
            sum=sum+(n1+1);
        }
        n2=n1-sum+k;
        n1=n1+1;
        for(i=n;i>0;i--){
            if(i!=n1&&i!=n2)
                cout<<"a";
            else
                cout<<"b";
        }
        cout<<endl;
    }
    return 0;
}