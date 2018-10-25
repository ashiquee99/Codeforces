#include <bits/stdc++.h>
using namespace std;
#define mx 1000000
bool vis[mx];
int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int j = 0; j<n; j++)
    {
        cin>>b[j];
    }
    memset(vis, false, sizeof(vis));
    int index = 0, cnt = 0;
    vector<int>v;
    for(int i = 0; i<n; i++)
    {
        if(!vis[b[i]])
        {

            for(int j = index; j<n; j++)
            {
                cnt++;
                if(b[i] == a[j])
                {
                    v.push_back(cnt);
                    index = j+1;
                    vis[a[j]] = true;
                    cnt = 0;
                    break;
                }
                vis[a[j]] = true;
            }
        }
        else
        {
            v.push_back(0);
            cnt = 0;
        }
    }
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
