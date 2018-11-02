#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string s;
string ans = "", newstr = "";
int main ()
{
    cin>>s;
    if(s.size()<26)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i = 0; i<s.size(); i++)
    {
        int cnt = 0;
        map<char, bool>mp;
        set<char>st;
        ans = "";
        if(i+26<=s.size())
        {
            for(int k = i; k<i+26; k++)
            {
                if(s[k] == '?')
                {
                    cnt++;
                }
                else
                {
                    st.insert(s[k]);
                    mp[s[k]] = true;
                }
            }
        }
        if(st.size()+cnt == 26)
        {
            for(int m = i; m<i+26; m++)
            {
                if(s[m] == '?')
                {
                    for(int ss = 65; ss<=90; ss++)
                    {
                        if(!mp[char(ss)])
                        {
                            ans+=char(ss);
                            mp[char(ss)] = true;
                            break;
                        }
                    }
                }
                else
                {
                    ans+=s[m];
                }
            }
            if(ans.size() == 26)
            {
                string z = "";
                for(int kk = 0; kk<i; kk++)
                {
                    if(s[kk] == '?')
                    {
                        z+='A';
                    }
                    else
                    {
                        z+=s[kk];
                    }
                }
                if(z.size()>0)
                {
                    cout<<z;
                }
                cout<<ans;
                if(i+26<s.size())
                {
                    string pp = "";
                    for(int vvv = i+26; vvv<s.size(); vvv++)
                    {
                        if(s[vvv] == '?')
                        {
                            pp+='A';
                        }
                        else
                        {
                            pp+=s[vvv];
                        }
                    }
                    cout<<pp<<endl;
                }
                return 0;
            }
        }
        mp.clear();
        st.clear();
    }
    cout<<"-1"<<endl;
    return  0;
}
