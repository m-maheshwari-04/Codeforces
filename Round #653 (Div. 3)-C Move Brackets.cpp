#include<bits/stdc++.h>
#define ll      long long int
#define MOD     1000000007
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,n,m,k,i,j;
        cin>>n;
        
        string s;
        cin>>s;
        
        ll open=0;
        ll close=0;
        ll count=0;
        
        ll max=s.size()/2;
        
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                open++;
            }
            else
            {
                if(open<=close)
                {
                    count++;
                }
                else
                {
                    close++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;	
}