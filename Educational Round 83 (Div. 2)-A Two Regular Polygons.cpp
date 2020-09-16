#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    int t,z;
    cin>>t;
    vector<int> v;
    for(z=0;z<t;z++)
    {
        int n,m;
        cin>>n>>m;
        int flag=0;
        while (n>0)
        {
            n=n-m;
            if(n%m==0)
            {
                v.push_back(1);
                flag=1;
                break;
            }
        }
        if(flag==0)
            v.push_back(0);
    }
    for(z=0;z<t;z++)
    {
        if(v[z]==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }   
   return 0; 
}