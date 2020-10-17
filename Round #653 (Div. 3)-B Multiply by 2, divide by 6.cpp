#include<bits/stdc++.h>
#define ll      long long int
#define MOD     1000000007
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,n,m,k;
        cin>>n;
        
        ll count_2=0;
        ll count_3=0;
        
        while(n%2==0)
        {
            count_2++;
            n=n/2;
        }
        while(n%3==0)
        {
            count_3++;
            n=n/3;
        }
        if(n!=1 || count_2>count_3)
        {
            cout<<"-1"<<endl;
            continue;
        }
        
        if(count_2==count_3)
        {
            cout<<count_3<<endl;
        }
        else
        {
            cout<<2*count_3-count_2<<endl;
        }
        
    }
    return 0;	
}