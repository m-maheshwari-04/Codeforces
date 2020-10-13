#include<bits/stdc++.h>
#define ll      long long int
#define MOD     1000000007
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--)
	{
        ll a,b,c;
        cin>>a>>b>>c;
        
        ll res1,res2;
        
        if(a<c)
        {
            cout<<"1 ";
        }
        else 
        {
            cout<<"-1 ";
        }
        
        
        if(c/b>=a)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
	}
	return 0;	

}