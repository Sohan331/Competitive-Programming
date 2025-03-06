//starting in the name of Almighty ALLAH//
//Bismillahir Rahmanir Rahim//
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define fast()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
const ll N = 1e7 + 10;
vector<ll>prime;
vector<bool> mark(N, false);


void solve()
{
    int n;
    cin>>n;

    ll sum=1;
    int tmp=n;
    while(n--){
        int x;
        cin>>x;
        sum*=x;
    }


    int ans=sqrt(sum);

    int ans1=sqrt(tmp);

    if(ans*ans==sum && ans1*ans1==tmp )yes;
    else no;
}

int32_t main()
{
    fast();
   
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout); 
    // #endif
    int t;
    cin>>t;
   
    for(int i=1; i<=t; i++)
    {
        solve();
    }
}


