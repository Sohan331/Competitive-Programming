#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define maximum INT_MIN
#define minimum INT_MAX
#define Pi 3.1415926535897932382626
#define in insert
#define srt(v) sort(v.begin(), v.end())
#define fast()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rev(v) reverse(v.begin(), v.end())
#define gap " "
#define nl "\n"
vector<ll>v;
void solve(int i)
{
    
    ll p, l;
    cin >> p >> l;
    ll khaiche = p - l;
    for (ll i = 1; i * i <= khaiche; i++)
    {
        if (khaiche % i == 0 )
        {
            if (i > l)
                v.pb(i);
            if (i != khaiche / i && (khaiche / i) > l)
                v.pb(khaiche / i);
        }
    }
    
    if (v.size() == 0)
        cout << "Case " << i << ": impossible" << nl;
    else
    {
        srt(v);
        cout << "Case " << i << ":";
        for (int i = 0; i < v.size(); i++)
        {
            cout << " " << v[i];
        }
        cout << nl;
    }
    v.clear();
}

int main()
{
    fast();
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
}
