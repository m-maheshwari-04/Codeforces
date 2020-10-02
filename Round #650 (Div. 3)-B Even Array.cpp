#include<bits/stdc++.h>
using namespace std;

#define ll  long long int

int main(){
	ll t; 
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int even=0,odd=0;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]%2!=i%2)
	        {
	            if(i%2)
	                odd++;
	           else
	                even++;    
	        }
	    }
	    if(odd==even)
	    {
	        cout<<odd<<endl;
	    }
	    else
	        cout<<"-1"<<endl;
	}
	return 0;
}