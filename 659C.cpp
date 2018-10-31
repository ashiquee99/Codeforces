#include <bits/stdc++.h>
using namespace std;
#define exit() return 0;
#define MX 1000000
int a[MX];
int main ()
{
    int n, m;
    cin>>n>>m;
    map<int, bool>mp;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]] = true;
    }
    int cnt = 0, cost = 0;
    vector<int>v;
    for(int i = 1; ; i++)
    {
        if(cost+i>m)
        {
            break;
        }
        if(!mp[i])
        {
            cnt++;
            v.push_back(i);
            cost+=i;

        }
    }
    cout<<cnt<<endl;
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
