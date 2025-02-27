#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define Pi 3.1415926535897932382626
#define srt(v) sort(v.begin(), v.end())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl "\n"
#define wt while (t--)
const ll M = 1e9 + 7;
const ll N = 500000  + 7;
vector<bool> mark(N + 1);
vector<ll> prime;
void sieve();
vector<ll>v(N,0);
void precomp();
vector<ll>pc(N+1,1);
ll gcd(ll a,ll b);
ll lcm(ll a,ll b);
vector<ll>sum(N,1);
void sum_of_div()
{
    sum.clear();
 sum[0]-=1;
 sum[1]-=1;

    for(int i=4;i<=N;i++){
        if(mark[i]){
            for(int j=2;j*j<=i;j++){
                    if(i%j==0){
                        sum[i]+=j;
                if(i/j!=j )sum[i]+=(i/j);

                    }

                //cout<<"sum of i && i && j && i/j "<<sum[i]<<" "<<i<<" "<<j<<" "<<i/j<<nl;
            }
        }

    }

}

void solve()
{
    int x;
    cin>>x;
    cout<<sum[x]<<nl;

}




int32_t main()
{
    fast();
    sieve();
    sum_of_div();
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        solve();
    }

    return 0;
}



void sieve()
{
    mark[0] = true;
    mark[1] = true;
    for (ll i = 4; i <= N; i += 2)
    {
        mark[i] = true;
    }
    for (ll i = 3; i * i <= N; i += 2)
    {
        if (!mark[i])
        {
            for (ll j = i * i; j <= N; j += 2 * i)
            {
                mark[j] = true;
            }
        }
    }
//    prime.push_back(2);
//    for (ll i = 3; i <= N; i += 2)
//    {
//        if (!mark[i])
//        {
//            prime.push_back(i);
//        }
//    }
}
