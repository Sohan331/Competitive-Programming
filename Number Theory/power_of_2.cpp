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

void solve()
{
    ll n;
    cin>>n;
    int ans=n;
    int rem=0;
    int sum=0;
    while(n>0){
        rem=n&1;
        sum+=rem;
        n/=2;

    }
    if(sum>1)cout<<"false"<<nl;
    else cout<<"true"<<nl;
}

int main()
{
    fast();
//    ll t;
//    cin >> t;
//    for (ll i = 0; i < t; i++)
//    {
//        solve();
//    }
    solve();
    return 0;
}
