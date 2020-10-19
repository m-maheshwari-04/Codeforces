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
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        char s[2000];
        
        for(j=0;j<=a[0];j++)
        {
            s[j]='a';
            cout<<'a';
        }
        cout<<endl;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<a[i];j++)
            {
                cout<<s[j];
            }
            if(s[j]=='a')
            {
                s[j]='b';
                cout<<"b";
            }
            else
            {
                s[j]='a';
                cout<<"a";
            }
            if(i!=n-1)
            {
                if(a[i]<a[i+1])
                {
                    for(j=a[i]+1;j<=a[i+1];j++)
                    {
                        s[j]='a';
                        cout<<"a";
                    }
                }
            }
            cout<<endl;
        }     
    }
    return 0;	
}