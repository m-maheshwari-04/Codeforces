#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t,z,n,i,x;
    cin>>t;
    for(z=0;z<t;z++){
        cin>>n;
        vector <int> v(n);
        
        for(i=0;i<n;i++)
        {
            cin>>x;
            v[i]=x;
        }
        sort(v.begin(),v.end());
        int count=1;
        auto itr=v.begin()+1;
        for(;itr!=v.end();itr++){
            if(*itr!=*(itr-1))
                count++;
        }  
        cout<<count<<endl;
    } 
    return 0;
}