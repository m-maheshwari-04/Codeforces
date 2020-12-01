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

    while(t--){
        string s;
        cin>>s;
        
        vector<int> m;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                continue;
            }
            int count=0;
            while(s[i]=='1')
            {
                i++;
                count++;
            }
            m.push_back(count);
        }

        sort(m.begin(),m.end());
        int res=0;
        int flag=0;
        for(int i=m.size()-1;i>=0;i-=2)
        {
            res+=m[i];
        }
        cout<<res<<endl;
    }
    return 0;	
}