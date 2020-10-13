#include<bits/stdc++.h>
#define ll      long long int
#define MOD     1000000007
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--)
	{
        string s;
        cin>>s;
        int i;
        
        ll count[1000001]={0};
        if(s[0]=='+')
            count[1]=1;
        else count[1]=-1 ;
        
        for(i=1;i<s.size();i++)
        {
            if(s[i]=='+')
                count[i+1]=count[i]+1;
            else
                count[i+1]=count[i]-1;
        }
        
        ll n=s.size();
        i=1;
        vector<ll> v;
        ll iteration_number=0;
        while(i<=n)
        {
            while(count[i]+iteration_number>=0 && i<=n)
            {
                i++;
            }
            v.push_back(i);
            iteration_number++;
        }
        ll res=-1;
        for(auto itr:v)
        {
            res+=itr;
        }
        cout<<res<<endl;
	}
	return 0;	

}