#include<bits/stdc++.h>
using namespace std;

#define ll  long long int

int main(){

	ll t; 
	cin>>t;
	while(t--)
	{
	    string a;
	    cin>>a;
	    int len=a.size();
	    cout<<a[0]<<a[1];
	    
	    for(int i=3;i<len;i+=2)
	    {
	        cout<<a[i];
	    }
	    cout<<endl;
	}
		

}