#include <iostream>
using namespace std;
 
int main(){
    int n,i;
    cin>>n;
    int b[200000],a[200000];
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    a[0]=b[0];
    a[1]=b[0]+b[1];
    int max;
    if(a[0]>a[1])
        max=a[0];
    else 
        max=a[1];
    
    for(i=2;i<n;i++){
        a[i]=b[i]+max;
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}