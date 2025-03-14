#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl "\n"

void solve(){
    int n;
    map<string,int>mp;

    cin>>n;
    while(n--){
        int x;
        cin>>x;
        string s;
        if(x==1){
            cin>>s;
            int y;
            cin>>y;
            mp[s]+=y;
        }
        else if(x==2){
            cin>>s;
            mp.erase(s);
        }
        else if(x==3){
            cin>>s;
            cout<<mp[s]<<nl;
        }
    }
}

int32_t main(){
    fast();
    solve();
    return 0;
}