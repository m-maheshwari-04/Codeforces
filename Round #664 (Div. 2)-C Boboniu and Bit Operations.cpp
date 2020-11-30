#include<bits/stdc++.h>
#define ll  int
#define endl "\n"
#define MOD     1000000007
using namespace std;

vector<ll> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x,y,n,m,k,i,j;
    cin>>n>>m;
    
    
    ll b[m];
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    
    int res=0;
    while(1){
        
        int fl=0;
        for(i=0;i<a.size();i++)
        {
            int flag=0;
            for(j=0;j<m;j++)
            {
                if(((a[i]&b[j])|res)==res)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                fl=1;
                break;
            }
        }
        if(fl==0){
            cout<<res<<endl;
            return 0;
        }
        else{
            res++;
        }
    }
    return 0;	
}