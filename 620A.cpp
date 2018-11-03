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
    int a, b, c, d;
    cin>>a>>b;
    cin>>c>>d;
    cout<<max(abs(a-c), abs(b-d));
    return 0;
}
