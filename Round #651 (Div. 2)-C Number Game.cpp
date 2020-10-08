#include<bits/stdc++.h>
#define ll  long long int
using namespace std;

ll divisors(ll n)
{
    ll count=0;
    ll i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
                if(i%2==1)
                {
                    count++;
                }
            }
        }
    }
    if(n!=1 && n%2==1)
    {
        count++;
    }
    return count;
}

int main(){

	int t; 
	cin>>t;
	while(t--)
	{
	    ll n,x,i;
	    cin>>n;
	    
	    if(n==1)
	    {
	        cout<<"FastestFinger"<<endl ;
	        continue;
	    }
	    if(n==2)
	    {
	        cout<<"Ashishgup"<<endl ;
	        continue;
	    }
	    if(n%2==1)
	    {
	        cout<< "Ashishgup"<<endl ;
	        continue;
	    }
	    
	    ll noofdivisors=divisors(n);
        if(noofdivisors==0)
        {
            cout<<"FastestFinger"<<endl ;
	        continue;
        }
	    
	    
	    if(n%4==0)
	    {
	        cout<< "Ashishgup"<<endl ;
	        continue;
	    }
	    else
	    {
	        if(noofdivisors==1)
	        {
	            cout<<"FastestFinger"<<endl ;
    	        continue;
	        }
	        else
	        {
    	        cout<<"Ashishgup"<<endl ;
    	        continue;
	        }
	    }
	    
	}
}