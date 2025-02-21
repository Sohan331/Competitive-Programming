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

void sieve()
{
    
  
    for (ll i = 3; i * i <=N; i += 2)
    {
        if (!mark[i])
        {
            for (ll j = i * i; j < N; j += 2 * i)
            {
                mark[j] = true;
            }
        }
    }

}



void solve()
{
long long n;
    cin>>n;
   long long uttor=sqrt(n);
   if(n==1||n==2||n==3)cout<<"NO"<<"\n";
   else if(n==4)cout<<"YES"<<"\n";
   else if(n%2==0 && n>4)cout<<"NO"<<"\n";
   else if(uttor*uttor==n && mark[uttor]==false)cout<<"YES"<<"\n";
   else cout<<"NO"<<"\n";
   
}

int32_t main()
{
    fast();
    sieve();
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout); 
    // #endif
    int t;
    cin>>t;
    sieve();
    for(int i=1; i<=t; i++)
    {
        solve();
    }
}


