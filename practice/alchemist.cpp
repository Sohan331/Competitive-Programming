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
    ll a,b,c;
    cin>>a>>b>>c;
    ll cnt,f=0;
    while(a!=0 || b!=0 || c!=0)
    {
        if(a>0){
            a-=2;
        }
       if(f==1)cnt++;
       if(f==0)f=1;



        if(b>0){
            b-=2;
        }
        if(f==1)cnt++;
         if(c>0){
            c-=2;
        }
        if(f==1)cnt++;


    }
    if(f==1)cout<<30+cnt<<nl;
    else cnt;
}

int main()
{
    fast();
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
    solve();


}
