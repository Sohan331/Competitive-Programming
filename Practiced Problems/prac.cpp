#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define maximum INT_MIN
#define minimum INT_MAX
#define Pi 3.1415926535897932382626
#define srt(v) sort(v.begin(), v.end())
#define fast()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rev(v) reverse(v.begin(), v.end())
#define gap " "
#define nl "\n"
#define in insert
#define out erase
#define all(v) v.begin(),v.end()
#define sz(v) v.size()
#define ms(v) v.resize( unique(v.begin(), v.end()) - v.begin() );

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    stack<int>s;
    vector<int>v;

    for(int i=d; i>=c; i--)
    {
        s.push(i);
    }
s.push(0);
    //int j=s.top();
    for(int i=0; i<=b; i++)
    {
       if(i!=0 && s.top()!=0){
        v.push_back(s.top());
       } 
        s.pop();

    }
//
//    for(int i=0;i<sz(v);i++){
//        cout << v[i] << gap;
//    }
//    cout << nl;
    cout<<*min_element(v.begin(),v.end())<<" ";

    cout<<*max_element(v.begin(),v.end());
    cout<<nl;
}
int main()
{
    fast();
    int t;

    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

