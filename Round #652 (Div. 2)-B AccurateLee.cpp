#include<bits/stdc++.h>
using namespace std;

#define ll      long long int
#define MOD     1000000007

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        string a;
        cin>>a;
        for(i=n-2;i>=0;)
        {
            if(a[i]=='1'&&a[i+1]=='0')
            {
                if(i+2<n && a[i+2]=='0')
                {
                    a.erase(i+1, 1); 
                }
                else
                {
                    a.erase(i,1);
                    i--;
                }
                n--;
            }
            else
            {
                i--;
            }
        }
        cout<<a<<endl;
    }
    return 0;	

}