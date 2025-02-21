#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define MIN_INT INT_MIN
#define Pi 3.1415926535897932382626
#define srt(v) sort(v.begin(), v.end())
#define fast()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
using namespace std;
const ll N = 1e5+7;
bitset<N + 1> mark;
void sieve();



void solve()
{
    int n,m;
    cin>>n;
    vector<int>v(n+3);
    v.clear();
    v.pb(0);
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        v.pb(x+v[i-1]);
    }
    cin>>m;
    int cnt=0;
  
   
    for(int i=0; i<m; i++)
    {
        int l,r;
        cin>>l>>r;
        if(mark[v[r]-v[l-1]] ==0)
        {
            cnt++;
        }
    }
    
    if (cnt==0)
    {
        cout<<"Adnan bhai, Priyom dada, Shuvo bhai will forever be single!"<<"\n";
    }
    else if (cnt==1)
    {
        cout<<"Sokina Khatun will be very happy!"<<"\n";
    }
    else if (cnt==2)
    {
        cout<<"Sokina Khatun will be very very happy!"<<"\n";
    }
    else if (cnt>=3)
    {
        cout<<"Sokina Khatun will be very very very happy!"<<"\n";
    }
   

}

int main()
{
    fast();
    sieve();
    solve();

}

void sieve()
{
    mark[0] = 1;
    mark[1] = 1;
    for (int i = 4; i <= N; i += 2)
    {
        mark[i] = 1;
    }
    for (int i = 3; i * i <= N; i += 2)
    {
        if (!mark[i])
        {
            for (int j = i * i; j <= N; j += 2 * i)
            {
                mark[j] = 1;
            }
        }
    }
}



