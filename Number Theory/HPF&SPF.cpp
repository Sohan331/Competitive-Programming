
#include <bits/stdc++.h>
using namespace std;
const int N=1e7+9;

bool mark[N];

vector<int>spf(N,0),hpf(N,0);

int main()
{
    for(int i=2; i<N; i++)
    {
        if(mark[i]==false)
        {
            spf[i]=i;
            hpf[i]=i;
            for(int j=2*i; j<=n; j+=i)
            {
                if(spf[j]==0)spf[j]=i;
                hpf[j]=i;
                mark[j]=true;
            }
        }
    }
    cout<<hpf[20]<<endl;
}