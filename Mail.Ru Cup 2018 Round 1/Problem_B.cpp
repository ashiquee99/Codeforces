#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main ()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    bool flag = true;
    int index;
    if(a[0]!=0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        ll mx = -135;
        for(ll i = 0; i<n-1; i++)
        {
            mx = max(a[i], mx);
            if(mx+1<a[i+1])
            {
                flag = false;
                index = i+2;
                break;
            }

        }
        if(flag)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<index<<endl;
        }
    }
    return 0;
}
