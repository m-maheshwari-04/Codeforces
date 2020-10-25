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
        
        x=n/4;
        if(n%4!=0)
        {
            x++;
        }
        for(i=0;i<n-x;i++)
        {
            cout<<"9";
        }
        
        for(i=0;i<x;i++)
        {
            cout<<"8";
        }
        
        cout<<endl;
    }
    return 0;	
}