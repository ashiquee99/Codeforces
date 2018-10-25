#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mx 1000000
int main ()
{
    ll N, M, K,L;
    cin>>N>>M>>K>>L;
    ll gift = K+L;
    ll p = gift/M;
    if(gift % M!=0)
    {
        p++;
    }
    if(p*M>N)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<p<<endl;
    }
    return 0;
}
