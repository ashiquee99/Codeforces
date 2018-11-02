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
    int N=1000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1] = 1, status[2] = 0;
	vector <int> v;
    int n;
    cin>>n;
    if(n == 1)
    {
        cout<<"1"<<endl;
        cout<<"1"<<endl;
        exit();
    }
    if(n == 2)
    {
        cout<<"1"<<endl;
        cout<<"1 1"<<endl;
        exit();
    }
    for(int i = 1; i<=n; i++)
    {
        v.push_back(i+1);
    }
    cout<<"2"<<endl;
    for(int i = 0; i<n; i++)
    {
          if(status[v[i]] == 0)
          {
              cout<<"2"<<" ";
          }
          else
          {
              cout<<"1"<<" ";
          }
    }
    return 0;
}
