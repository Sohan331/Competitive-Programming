#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int main()    
{
    int mark[N];
    int spf[N],hpf[N];
    
    for(int i=2; i<N; i++)
    {
        if(mark[i] == false)
        {
            spf[i] = i;
            hpf[i] = i;
            for(int j=2*i; j<=N; j+=i)
            {
                if(spf[j] == 0) spf[j] = i;
                hpf[j] = i;
                mark[j] = true;
            }
        }
    }

    int num;
    cin>>num;
    map<int,int>power;

    while(num > 1)
    {
        int vag = spf[num];
        while(num % vag == 0)
        {
            num /= vag;
            power[vag]++;
        }
    }
    for(auto i:power) cout<<i.first<<"to the power "<< i.second<<" ";
    cout<<endl;
}