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
        ll a[4];
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        
        int i,c=0;
        int flag=1;
        for(i=0;i<4;i++)
        {
            if(a[i]%2==1)
            {
                c++;
            }
        }
        
        if(c>1)
            flag=1;
        else
            flag=0;
        
        if(flag==0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        
        a[0]-=1;
        a[1]-=1;
        a[2]-=1;
        a[3]+=1;
        sort(a,a+3);
        if(a[0]<0)
        {
            cout<<"No"<<endl;
            continue;
        }
        
        c=0;
        for(i=0;i<4;i++)
        {
            if(a[i]%2==1)
            {
                c++;
            }
        }
        
        if(c>1)
            flag=1;
        else
            flag=0;
        
        if(flag==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;	
}