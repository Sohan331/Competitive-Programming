//starting in the name of Almighty ALLAH//
//Bismillahir Rahmanir Rahim//
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define maximum INT_MIN
#define minimum INT_MAX
#define Pi 3.1415926535897932382626
#define srt(v) sort(v.begin(), v.end())
#define fast()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rev(v) reverse(v.begin(), v.end())
#define gap " "
#define nl "\n"
#define in insert
const ll M = 1e9 + 7;
const int N = 1e8;
void precomp();
vector<ll>pc(N+1,1);
ll gcd(ll a,ll b);
ll lcm(ll a,ll b);
vector<bool> mark(N + 1, false);
vector<ll> prime;


void sieve()
{
    mark[0] = true;
    mark[1] = true;
    for (int i = 4; i <=N; i += 2)
    {
        mark[i] = true;
    }
    for (int i = 3; i * i <=N; i += 2)
    {
        if (!mark[i])
        {
            for (int j = i * i; j < N; j += 2 * i)
            {
                mark[j] = true;
            }
        }
    }

    prime.push_back(0);
    prime.push_back(2);

    for (ll i = 3; i <=N; i += 2)
    {
        if (!mark[i])
        {
           prime.push_back(i);

        }

    }
}

void solve()
{
    ll n,m;
    cin>>n>>m;
    cout<<prime[m]-prime[n-1]<<nl;
}




int main()
{
    fast();
    sieve();
  

    for(int i=2;i<prime.size();i++)
    {
        prime[i]+=prime[i-1];
    }
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        solve();
    }


}



/////////////////////////////////////////////FUNCTIONS//////////////////////////////////////////////////////////////



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


ll lcm(ll a, ll b)
{
    return (a*b / gcd(a, b)) ;
}
ll gcd(ll a, ll b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
