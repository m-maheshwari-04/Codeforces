#include<bits/stdc++.h>
#define ll      long long int
#define endl "\n"
#define MOD     1000000007
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        ll x,y,n,m,k,i,j;
        cin>>n;
        if(n-6-10-14>0 && n-6-10-14!=6  && n-6-10-14!=10  && n-6-10-14!=14)
        {
            cout<<"YES"<<endl;
            cout<<"14 10 6 "<<n-6-10-14<<endl;
        }
        else if(n-6-10-15>0 && n-6-10-15!=6  && n-6-10-15!=10  && n-6-10-15!=15)
        {
            cout<<"YES"<<endl;
            cout<<"15 10 6 "<<n-6-10-15<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;	
}