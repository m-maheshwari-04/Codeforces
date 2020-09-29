#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    unsigned long long int t,n,res,i,k,last,temp;
    cin>>t;
    while(t--)
    {
        res=0;
        cin>>n;
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        k=1;
        last=1;
        for(i=3;i<=n;i+=2)
        {
            temp=i*i;
            res=res+(temp-last)*k;
            last=temp;
            k++;
        }
        cout<<res<<endl;
    }
    return 0;
}