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
        string s;
        cin>>s;
        
        int flag=0;
        string s1="abacaba";
        for(i=0;i<n-6;i++)
        {
            int c=0;
            for(j=0;j<7;j++)
            {
                if(s[i+c]==s1[j])
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            if(c==7)
            {
                flag+=1;
            }
        }
        if(flag>1)
        {
            cout<<"No"<<endl;
            continue;
        }
        
        if(flag==1)
        {
            cout<<"Yes"<<endl;
            for(i=0;i<n;i++)
            {
                if(s[i]!='?')
                    cout<<s[i];
                else
                    cout<<"z";
            }
            cout<<endl;
            continue;
        }
        i=0;
        xyz:
        flag=-1;
        for(;i<n-6;i++)
        {
            int c=0;
            for(j=0;j<7;j++)
            {
                if(s[i+c]=='?')
                {
                    c++;
                }
                else if(s[i+c]==s1[j])
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            if(c==7)
            {
                flag=i;
                break;
            }
        }
        if(flag==-1)
        {
            cout<<"No"<<endl;
            continue;
        }
        
        string s2=s;
        for(j=0;j<7;j++)
        {
            if(s2[j+flag]=='?')
            {
                s2[j+flag]=s1[j];
            }
        }
        int temp=0;
        for(i=0;i<n-6;i++)
        {
            int c=0;
            for(j=0;j<7;j++)
            {
                if(s2[i+c]==s1[j])
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            if(c==7)
            {
                temp+=1;
            }
        }
        if(temp>1)
        {
            for(j=0;j<4;j++)
            {
                if(s[j+flag]=='?')
                {
                    s[j+flag]='z';
                }
            }
            i=flag+3;
            goto xyz;
        }
        
        cout<<"Yes"<<endl;
        for(i=0;i<n;i++)
        {
            if(s2[i]!='?')
                cout<<s2[i];
            else
                cout<<"z";
        }
        cout<<endl;
        continue;
        
    }
    return 0;	
}