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
        int one=0;
        int zero=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        ll x=min(one,zero);
        
        if(x%2==0)
        {
            cout<<"NET"<<endl;
        }
        else
        {
            cout<<"DA"<<endl;
        }
	}
	return 0;	

}