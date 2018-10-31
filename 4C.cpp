#include <bits/stdc++.h>
using namespace std;
#define exit() return 0;
int main ()
{
    int n;
    cin>>n;
    string s;
    map<string, int>mp;
    map<string, int>::iterator it;
     vector< pair <string,int> > v;
    string ok = "OK";
    for(int i = 0; i<n; i++)
    {
        cin>>s;
        mp[s]++;
        if(mp[s] == 1)
        {
            v.push_back(make_pair(ok, -12));
        }
        else
        {
           v.push_back(make_pair(s, mp[s]-1));
        }
    }
    for(int i  = 0; i<v.size(); i++)
    {
        if(v[i].second == -12)
        {
            cout<<v[i].first<<endl;
        }
        else
        {
            cout<<v[i].first<<v[i].second<<endl;
        }
    }
    return 0;
}
