#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){
    int t, z, n, i, j;
    cin >> t;
    for (z = 0; z < t; z++){
        map<int,set<int> > m;
        int x,data;
        
        cin>>n;
        for (i = 0; i < n; i++)
        {
            cin>>x;
            while(x--)
            {
                cin>>data;
                m[i].insert(data);   
            }
        }
        vector < int >q (n, 0);
        vector < int >k (n, 0);
        
        for(i=0;i<n;i++){
            int temp = n + 1;
            for(set<int>::iterator it1=m[i].begin();it1!=m[i].end();)
            {
                if (temp > *it1 && k[*it1 - 1] == 0)
                    temp = *it1;
                it1++;
            }
            if (k[temp - 1] == 0 && temp != n + 1)
            {
                k[temp - 1]++;
                q[i]++;
            }
        }
        
        auto itr = find (q.begin (), q.end (), 0);
        if (itr == q.end ())
            cout << "OPTIMAL" << endl;
        else{
            auto itr1 = find (k.begin (), k.end (), 0);
            cout << "IMPROVE" << endl;
            cout << itr - q.begin() +1 << " " << itr1 - k.begin() +1<< endl;
        }
    }
    return 0;
}