// starting in the name of Almighty ALLAH//
// Bismillahir Rahmanir Rahim//
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define srt(v) sort(v.begin(), v.end())
#define fast()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"



void solve()
{
    set<ll>v;
    ll n, k;
    cin >> n >> k;
   

    if (k==1)
    {
        cout << 1 << nl;
        return;
    }
    else if(n%2==0 && k==2){
        cout<<2<<nl;
        return;
    }
    else
    {
        v.insert(1);
        v.insert(n);
        for (ll i = 2; i * i <= n; i++)
        {
            if (v.size() == k * 2)
                break;
            if (n % i == 0)
            {              
                    v.insert(i);
                    if (i != n / i) v.insert(n / i);              
            }
        }
    }

    if (v.size() < k)
    {
        cout << -1 << nl;
        return;
    }
    int j=1;
for(auto it=v.begin();it!=v.end();it++,j++){
    if(j==k){
        cout<<*it<<nl;
        return;
    }
}
}

int32_t main()
{
    fast();
    solve();
    return 0;
}

