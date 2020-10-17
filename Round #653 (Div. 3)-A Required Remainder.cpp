#include<bits/stdc++.h>
#define ll      long long int
#define MOD     1000000007
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,n,m,k;
        cin>>x>>y>>n;
        ll res=(n/x)*x;
        if(res+y<=n)
            cout<<res+y<<endl;
        else
            cout<<res-x+y<<endl;
    }
    return 0;	
}