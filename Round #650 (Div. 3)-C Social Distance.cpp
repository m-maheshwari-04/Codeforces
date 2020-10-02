#include<bits/stdc++.h>
using namespace std;

#define ll  long long int

int main(){
	ll t; 
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int ans=0;
	    int count=0;
	    char x;
	    vector<int> v;
	    int i;
	    
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        if(x == '1')
	        {
	            v.push_back(i);
	            count++;
	        }
	    }
	    if(count==0)
	    {
	        ans=1;
	        i=k+1;
	        while(i<n)
	        {
	            ans++;
	            i=i+k+1;
	        }
	        cout<<ans<<endl;
	        continue;
	    }
	    
	    int prev=v[0];
	    
	    if(prev>0)
        {
            while(prev-k-1>=0)
            {
                prev-=k+1;
                ans++;
            }
        }
	    prev=v[0];
	    
	    for(i=1;i<count;i++)
	    {
	        if(v[i]-prev>(2*k)+1)
	        {
	            while(v[i]-prev>(2*k)+1)
	            {
	                prev+=k+1;
	                ans++;
	            }
	        }
	        prev=v[i];
	    }
	    
	    if(n-prev>k+1)
        {
            while(n-prev>k+1)
            {
                prev+=k+1;
                ans++;
            }
        }
	    cout<<ans<<endl;
	}
	return 0;
}