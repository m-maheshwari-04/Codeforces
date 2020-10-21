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
        ll l,r,x,y;
        cin>>l>>r;
        
        y=r;
        x=l;
        
        if(2*l<=r)
        {
            cout<<l<<" "<<2*l<<endl;
        }
        else
        {
            cout<<"-1 -1"<<endl;
        }
    }
    return 0;	
}