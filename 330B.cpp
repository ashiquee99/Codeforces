#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mx 100000
bool vis[mx];
int main ()
{
    int n, m;
    cin>>n>>m;
   vector< pair <int, int> >v;
    for(int i = 0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        vis[x] = true;
        vis[y] = true;
    }
    int startnode;
    for(int i = 1; i<=n; i++)
    {
        if(!vis[i])
        {
            startnode = i;
            break;
        }
    }
    int cnt = 0;
    for(int i = 1; i<=n; i++)
    {
        if(i!=startnode)
        {
            v.push_back(make_pair(startnode, i));
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return  0;
}
