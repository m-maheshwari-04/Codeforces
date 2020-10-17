#include<bits/stdc++.h>
#define endl "\n"
#define ll      long long int
#define MOD     1000000007
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x,n,k,i,temp,y,t;
    cin>>n>>k;
    
    priority_queue <int, vector<int>, greater<int> > both;
    priority_queue <int, vector<int>, greater<int> > first;
    priority_queue <int, vector<int>, greater<int> > second;
    priority_queue <int, vector<int>, greater<int> > none;
    
    int flag=0;
    ll tmax=0;
    
    for(i=0;i<n;i++)
    {
        cin>>t>>x>>y;
        if(x==1&&y==1)
        {
            both.push(t);
        }
        else if(x==1&&y==0)
        {
            first.push(t);
        }
        else if(x==0&&y==1)
        {
            second.push(t);
        }
        else 
        {
            none.push(t);
        }
    }
    if(both.size()+first.size()<k || both.size()+second.size()<k)
    {
        cout<<"-1";
        return 0;
    }
    
    int count_a=k;
    int count_b=k;
    ll res=0;
    while(count_a && count_b)
    {
        if(both.size() && first.size() && second.size())
        {
            if(both.top()<=first.top()+second.top())
            {
                res+=both.top();
                both.pop();
            }
            else
            {
                res+=first.top()+second.top();
                first.pop();
                second.pop();
            }
        }
        else if(both.size())
        {
            res+=both.top();
            both.pop();
        }
        else
        {
            res+=first.top()+second.top();
            first.pop();
            second.pop();
        }
        count_a--;
        count_b--;
    }
    while(count_a)
    {
        res+=first.top();
        first.pop();
    }
    while(count_b)
    {
        res+=second.top();
        second.pop();
    }
    cout<<res;
    return 0;	
}