#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//#define mx 1000006
//bool vis[mx];
int main ()
{
   ll n;
   cin>>n;
   ll a[n];
   for(ll i = 0; i<n; i++)
   {
       cin>>a[i];
   }
   sort(a, a + n);
   int mx = 1;
  for(ll i = 0; i<n; i++)
   {
      if(a[i]>=mx)
      {
          a[i] = mx;
          mx++;
      }
      else
      {
          continue;
      }
   }
   cout<<a[n-1]+1;
    return  0;
}
