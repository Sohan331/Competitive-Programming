#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define fast()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
const ll N = 1e7 + 10;
vector<ll>prime;
vector<bool> mark(N, false);
vector<ll>pc(N+1,1);
void precomp()
{
    ll cnt=0;
    for (ll i=2; i<=N; i++)
    {
        if(!mark[i])
        {
            for(ll j=i ; j<=N; j+=i)
            {
                ll temp=j;
                cnt=0;
                while(temp%i==0)
                {
                    cnt++;
                    temp/=i;

                }
                pc[j]*=cnt+1;
            }

        }
    }
}
void solve()
{

}


int main(){
    fast();
    precomp();
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        solve();
    }
}