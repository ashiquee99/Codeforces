#include <bits/stdc++.h>
using namespace std;
#define                MX 1000006
#define                FAST_IO ios_base::sync_with_stdio(false),cin.tie(NULL)
#define                exit() return 0;

int main ()
{
    FAST_IO;
    int n, m;
    cin>>n>>m;
    if(n<m)
    {
        cout<<"-1"<<endl;
        exit();
    }
    int step = 2, cnt = 1;
    while(1)
    {
        int k = m*cnt;
        if(k*step>=n)
        {
            cout<<k<<endl;
            break;
        }
        cnt++;
    }
    return 0;
}
