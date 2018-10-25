#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    map<char, int>mp;
    map<char, int>::iterator it;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    string ans = "";
    int len = s.size();
    bool flag = false;
    int cnt= 0;
    for(int i = 0; i<s.size()-1; i++)
    {
        if(s[i]!=s[i+1])
        {
            ans+=s[i];
            ans+=s[i+1];
            flag = true;
            break;
        }
    }
    if(flag){
            cout<<"YES"<<endl;
    cout<<ans<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
