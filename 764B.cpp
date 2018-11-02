#include <bits/stdc++.h>
using namespace std;
#define MX 1000006
typedef long long int ll;
int main ()
{
    ll n;
    cin>>n;
    ll b[n+5], a[n+5];
    for(ll i = 0; i<n; i++)cin>>a[i];
    for(ll i = 0; i<n/2; i++)
    {
        if(i % 2 == 0)
        {
            b[i] = a[n-i-1];
            b[n-i-1] = a[i];
        }
        else
        {
            b[i] = a[i];
            b[n-i-1] = a[n-i-1];
        }
    }
    if(n % 2 == 1)
    {
        b[n/2] = a[n/2];
    }
    for(ll i = 0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
