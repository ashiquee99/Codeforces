#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int cnt = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == '0')
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        for(int i = 1; i<s.size(); i++)
        {
            cout<<s[i];
        }
    }
    else
    {
        bool flag = true;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == '0' && flag)
            {
                flag = false;
                continue;
            }
            else
            {
                cout<<s[i];
            }
        }
    }
    return 0;
}
