#include <bits/stdc++.h>
using namespace std;
#define mx 1000000
int ans[mx], l[mx], r[mx];
int main ()
{
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)cin>>l[i];
    for(int i = 0; i<n; i++)cin>>r[i];
    for(int i =  0; i<n; i++)
    {
        int GetCandy = n - l[i] - r[i];
        ans[i] = GetCandy;
    }
    for(int i = 0; i<n; i++)
    {
        int cnt1 = 0;
        for(int j = i+1; j<n; j++)
        {
            if(ans[i]<ans[j])
            {
                cnt1++;
            }
        }
        if(cnt1!=r[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        for(int k = n-1; k>=0; k--)
        {
            int cnt2 = 0;
            for(int v= k-1; v>=0; v--)
            {
                if(ans[k]<ans[v])
                {
                    cnt2++;
                }
            }
            if(cnt2!=l[k])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i = 0; i<n; i++)cout<<ans[i]<<" ";
    return 0;
}
