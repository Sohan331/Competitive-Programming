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
const int N = 1e14;
void sieve();
void precomp();
vector<ll>pc(N+1,1);
ll gcd(ll a,ll b);
ll lcm(ll a,ll b);
vector<bool> mark(N + 1, false);
vector<ll> prime;
vector<ll>hpf;


int32_t main()
{
    fast();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    precomp();
    
    ll n;
    
}



/////////////////////////////////////////////FUNCTIONS//////////////////////////////////////////////////////////////



void sieve()
{
    mark[0] = 1;
    mark[1] = 1;
    for (int i = 4; i <=N; i += 2)
    {
        mark[i] = 1;
    }
    for (int i = 3; i * i <=N; i += 2)
    {
        if (!mark[i])
        {
            for (int j = i * i; j < N; j += 2 * i)
            {
                mark[j] = 1;
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


void precomp()
{
 
    for (ll i=2; i<=N; i++)
    {
        if(!mark[i])
        {
            hpf[i]=-1;
            for(ll j=2*i ; j<=N; j+=i)
            {
                hpf[j]=i;
                mark[j]=1;
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
