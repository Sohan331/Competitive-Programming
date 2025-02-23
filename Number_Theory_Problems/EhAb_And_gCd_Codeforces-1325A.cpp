#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define maximum INT_MIN
#define minimum INT_MAX
#define Pi 3.1415926535897932382626
#define srt(v) sort(v.begin(), v.end())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rev(v) reverse(v.begin(), v.end())
#define gap " "
#define nl "\n"
#define in insert
#define wt while (t--)
using namespace std;

const ll M = 1e9 + 7;
const ll N = 1e7 + 1;
vector<bool> mark(N + 1);
vector<ll> prime;
void sieve();
vector<ll>v(N,0);
void precomp();
vector<ll>pc(N+1,1);
ll gcd(ll a,ll b);
ll lcm(ll a,ll b);


void solve()
{
    ll n;
    cin>>n;
    if (n==2)cout<<1<<" "<<1<<nl;
    else
    {
        if(n%2==0)
        {
            cout<<2<<" "<<n-2<<nl;
            //cout<<"GCD AND LCM ARE "<<gcd(2,n-2)<<" "<<lcm(2,n-2)<<nl;
        }
        else
        {
            cout<<1<<gap<<n-1<<nl;
            //cout<<"GCD AND LCM ARE "<<gcd(2,n-2)<<" "<<lcm(1,n-1)<<nl;
        }
    }

}




int32_t main()
{
    fast();

    ll t;
    cin>>t;
    for(ll i=0; i<t; i++)
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
    prime.push_back(2);
    for (ll i = 3; i <= N; i += 2)
    {
        if (!mark[i])
        {
            prime.push_back(i);
        }
    }
}


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