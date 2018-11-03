#include <bits/stdc++.h>
using namespace std;
#define                MX 1000006
#define                FAST_IO ios_base::sync_with_stdio(false),cin.tie(NULL)
#define                exit() return 0;

int a[MX];
int main ()
{
    FAST_IO;
    int N;
    cin>>N;
    for(int i = 0; i<N; i++)cin>>a[i];
    int gd = a[0];
    for(int i = 1; i<N; i++)
    {
        gd = __gcd(gd, a[i]);
    }
    cout<<gd*N<<endl;
    return 0;
}
