#include<bits/stdc++.h>
#define ll  long long int
using namespace std;

int main(){
	int t; 
	cin>>t;
	while(t--)
	{
	    ll n,x,i;
	    cin>>n;
	    vector<ll> odd;
	    vector<ll> even;
	    
	    for(i=1;i<(2*n)+1;i++)
	    {
	        cin>>x;
	        if(x%2==0)
	            even.push_back(i);
	        else
	            odd.push_back(i);
	    }
	    if(odd.size()>0 && odd.size() % 2 ==1)
	    {
	        odd.pop_back();
	        even.pop_back();
	    }
	    else if(odd.size()>0)
	    {
	        odd.pop_back();
	        odd.pop_back();
	    }
	    else
	    {
	        even.pop_back();
	        even.pop_back();
	    }
	    
	    for(i=0;i<odd.size();i+=2){
	        cout<<odd[i]<<" "<<odd[i+1]<<endl;
	    }
	    for(i=0;i<even.size();i+=2){	    
	        cout<<even[i]<<" "<<even[i+1]<<endl;
	    }
	}
}