#include <bits/stdc++.h>
using namespace std;
#define MX 1000006
int a[MX];
int main ()
{
  int n, mx = -123, mn = 10000, MNINDEX;
  cin>>n;
  for(int i =0; i<n; i++)
  {
      cin>>a[i];
      mx = max(mx, a[i]);
      mn = min(mn, a[i]);
  }
  int mxindex, mnindex;
  for(int i = 0; i<n; i++)
  {
      if(mx == a[i])
      {
          mxindex = i+1;
          break;
      }
  }
  for(int i = n-1; i>=0; i--)
  {
      if(mn == a[i])
      {
          mnindex = i+1;
          break;
      }
  }
  if(mxindex>mnindex)
  {
      mnindex++;
  }
  //cout<<mxindex<<" "<<mnindex<<endl;
  //return 0;
  cout<<(mxindex-1) + (n-mnindex);
  return 0;
}
