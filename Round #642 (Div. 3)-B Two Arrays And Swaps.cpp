#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,i,j,count;
    cin>>t;
    while(t--){
        int max1=0;
        cin>>n>>k;
        int a[n],b[n];
        
        for(i=0;i<n;i++){
            cin>>a[i];
            if(k==0)
                max1=max1+a[i];
        }
        
        for(i=0;i<n;i++)
            cin>>b[i];
        
        if(k==0){
            cout<<max1<<endl;
            continue;
        }
        
        sort(a,a+n);
        sort(b,b+n);

        j=n-1;

        for(i=0;i<n;i++){
            if(k && a[i]<b[j]){
                max1=max1+b[j];
                j--;
                k--;
            }
            else
                max1=max1+a[i];
        }
        cout<<max1<<endl;
    }
    return 0;
}
