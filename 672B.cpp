#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main ()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char, int>mp;
    map<char, int>::iterator it;
    for(int i = 0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    int ans = 0;
    for(it = mp.begin(); it!=mp.end(); it++)
    {
       if(it->second>1){
       ans+=(it->second -1);
       }
    }
    int ok = mp.size();
   // cout<<ans+ok<<endl;
    if(ok+ans>26)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    return  0;
}
