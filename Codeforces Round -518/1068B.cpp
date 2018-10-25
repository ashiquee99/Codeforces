#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main ()
{
    ll b;
    cin>>b;
    ll cnt = 0;
    for(ll i = 1; i*i<=b; i++)
    {
        if(b % i == 0)
        {
            cnt++;
            if(b/i!=i)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
