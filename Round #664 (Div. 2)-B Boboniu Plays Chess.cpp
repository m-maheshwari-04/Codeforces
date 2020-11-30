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
    
        ll x,y,n,m,k,i,j;
        cin>>n>>m>>x>>y;
        
        int current_y=y;
        int current_x=x;
        while(current_y>0)
        {
            cout<<current_x<<" "<<current_y<<endl;
            current_y--;
        }
        current_y=y+1;
        while(current_y<=m)
        {
            cout<<current_x<<" "<<current_y<<endl;
            current_y++;
        }
        
        int flag=1;
        for(i=x-1;i>0;i--)
        {
            for(j=1;j<=m;j++)
            {
                if(flag==1)
                {
                    cout<<i<<" "<<m-j+1<<endl;
                }
                else
                {
                    cout<<i<<" "<<j<<endl;
                }
            }
            if(flag==1)
            {
                flag=0;
            }
            else
            {
                flag=1;
            }
        }
        
        for(i=x+1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(flag==1)
                {
                    cout<<i<<" "<<m-j+1<<endl;
                }
                else
                {
                    cout<<i<<" "<<j<<endl;
                }
            }
            if(flag==1)
            {
                flag=0;
            }
            else
            {
                flag=1;
            }
        }
    return 0;	
}