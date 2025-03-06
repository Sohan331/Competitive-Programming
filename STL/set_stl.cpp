#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    set<int>s;

    int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        int y,x;
        cin>>y>>x;

        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else {
           if(s.find(x)!=s.end()){
               cout<<"Yes"<<endl;
           }
           else {
               cout<<"No"<<endl;
           }
        }
    }

}

int main()
{
    fast();
    solve();

}