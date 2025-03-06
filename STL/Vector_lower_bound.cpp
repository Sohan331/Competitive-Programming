#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define maximum INT_MIN
#define minimum INT_MAX
#define Pi 3.1415926535897932382626
#define srt(v) sort(v.begin(),v.end())
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rev(v) reverse(v.begin(),v.end())
#define gap " "
#define nl "\n"
#define in insert
#define wt while(t--)
using namespace std;


void bin()
{

    vector<ll>v;

    ll n;cin>>n;
    for (ll i=0;i<n;i++){
        ll a;cin>>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());

    ll h;cin>>h;
    while(h--){
            ll target;
        cin>>target;
        auto it = lower_bound(v.begin(),v.end(),target);
        ll ind=it-v.begin();

        if (v[ind]==target){
            cout<<"Yes"<<gap<<++ind<<nl;
        }
        else {
            cout<<"No"<<gap<<++ind<<nl;
        }




    }


}



void solve() {

}




int main() {
    fast();

    bin();

    return 0;
}