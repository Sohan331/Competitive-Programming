#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define maximum INT_MIN
#define minimum INT_MAX
#define Pi 3.1415926535897932382626
#define s(v) sort(v.begin(),v.end())
#define rs(v) sort(v.rbegin(), v.rend())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gap " "
#define nl "\n"
#define in insert
const ll M = 1e9 + 7;
const ll N = 1e7 + 7;
using namespace std;

void solve()
{
    ll n,m;
    vector<ll>v;

    cin>>n;
    while(n--){
        ll a;
        cin>>a;
        v.pb(a);
    }
    cin>>m;
    ll a,b;
    cin>>a>>b;

    v.erase(v.begin()+(--a),v.begin()+b);
    cout<<v.size()<<nl;
    for(auto it:v){cout<<it<<gap;}

}

int main()
{
    fast();
    solve();

}