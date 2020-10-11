#include<bits/stdc++.h>
using namespace std;

#define ll  long long int
#define MOD 1000000007

void cal (ll *dp)
{
    ll *zero=new ll[2000001];
    ll *ones=new ll[2000001];
    
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    
    zero[0]=1;
    zero[1]=1;
    zero[2]=3;
    
    ones[0]=0;
    ones[1]=1;
    ones[2]=1;
    
    for(ll i=3;i<=2000000;i++)
    {
        dp[i]=dp[i-3]+zero[i-2];
        dp[i]%=MOD;
        
        ones[i]=zero[i-1];
        
        zero[i]=zero[i-1]+2*ones[i-1];
        zero[i]%=MOD;
    }
    return;
}


int main(){
    ll *dp=new ll[2000001];
    cal(dp);
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<(4*dp[n-1])%MOD<<endl;
    }
    return 0;	

}