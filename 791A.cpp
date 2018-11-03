#include <bits/stdc++.h>
using namespace std;
#define                MX 1000006
#define                FAST_IO ios_base::sync_with_stdio(false),cin.tie(NULL)
#define                exit() return 0;

bool status[1100002];
int a[MX];
int main ()
{
    FAST_IO;
    int a, b;
    cin>>a>>b;
    int cnt = 0;
    while(a<=b)
    {
        a*=3;
        b*=2;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
