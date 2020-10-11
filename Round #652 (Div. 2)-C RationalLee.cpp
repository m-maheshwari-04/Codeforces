#include<bits/stdc++.h>
using namespace std;

#define ll      long long int
#define MOD     1000000007

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,x;
        cin>>n>>k;
        
        priority_queue <ll> num;
        priority_queue <ll, vector<ll>, greater<ll>> num_min;
        
        priority_queue <ll> f_max;
        priority_queue <ll, vector<ll>, greater<ll>> f;
        
        
        for(i=0;i<n;i++)
        {
            cin>>x;
            num.push(x);
            num_min.push(x);
        }
        for(i=0;i<k;i++)
        {
            cin>>x;
            f.push(x);
            f_max.push(x);
        }
        
        ll res=0;
        while(f.top()==1 && k>0)
        {
            f.pop();
            res+=(2*num.top());
            num.pop();
            k--;
        }
        
        while(k>0)
        {
            res+=(num.top()+num_min.top());
            num.pop();
            
            ll count=f_max.top();
            f_max.pop();
            
            for(ll j=0;j<count-1;j++)
            {
                num_min.pop();
            }
            
            k--;
        }
        cout<<res<<endl;
    }
    return 0;	

}