#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int x, y, z, t1, t2, t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    int siri = abs(x-y);
    int ok = abs(x-y);
    siri*=t1;
    int e = abs(z-x);
    e*=t2;
    int lift = ok*t2;
    lift = lift+e+t3+t3+t3;
    if(lift<=siri)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
