#include<bits/stdc++.h>
#define ll      long long int
#define endl "\n"
#define MOD     1000000007
using namespace std;

ll power(ll x,ll y)
{
    ll temp=1ll;

    while(y)
    {
        if(y&1) temp=(temp*x);
	//temp%=MOD;
        x=(x*x);
        y=y>>1;
    }
    return temp;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--)
    {
        ll x,y,n,m,k,i,j;
        cin>>n;
        
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int flag=1;
        
        if(a[0]+a[1]<=a[n-1])
            cout<<"1 2 "<<n<<endl;
        else
            cout<<-1<<endl;   
    }
    return 0;	
}