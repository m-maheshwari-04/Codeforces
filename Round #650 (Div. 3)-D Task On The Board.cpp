#include<bits/stdc++.h>
using namespace std;

#define ll  long long int

int main(){

    ll t; 
    cin>>t;
    while(t--)
    {
        string s;
        map <char,int> m1;
        cin>>s;
        int i,len=s.size();
        
        for(i=0;i<len;i++)
        {
            m1[s[i]]++;
        }
        
        map<char,int>::reverse_iterator it;
        it=m1.rbegin(); 
        
        int m;
        cin>>m;
        
        int count_0=0;
        int a[m]={0};
        
        int visited[m]={0};
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                count_0++;
                visited[i]=1;
            }
        }
        
        int total=m;
        char final[m];
        it=m1.rbegin(); 
         
        while((it->second) < count_0)
        {
            it++;
        }
        
        vector<int> v;
        
        int temp=count_0;
        for(i=0;i<m && temp>0;i++)
        {
            if(a[i]==0)
            {
                v.push_back(i);
                final[i]=it->first;
                temp--;
                total--;
            }
        }
        it++;
        
        while(total && count_0>0)
        {
            for(i=0;i<count_0;i++)
            {
                int x=v[i];
                int p=1;
                while(x-p>=0 || x+p<m)
                {
                    if(x-p>=0 && visited[x-p]==0)
                    {
                        a[x-p]-=p;
                    }
                    if(x+p<m && visited[x+p]==0)
                    {
                        a[x+p]-=p;
                    }
                    p++;
                }
            }
            
            v.clear();
            count_0=0;
        
            for(i=0;i<m;i++)
            {
                if(a[i]==0 && visited[i]==0)
                {
                    count_0++;
                }
            }
             
            while((it->second) < count_0)
            {
                 it++;
            }
            
            temp=count_0;
            
            for(i=0;i<m && temp>0;i++)
            {
                
                if(a[i]==0 && visited[i]==0 )
                {
                    v.push_back(i);
                    final[i]=it->first;
                    visited[i]=1;
                    temp--;
                    total--;
                }
            }
            it++;
        }
        for(i=0;i<m;i++)
            cout<<final[i];
        cout<<endl;
    }
    return 0;
}