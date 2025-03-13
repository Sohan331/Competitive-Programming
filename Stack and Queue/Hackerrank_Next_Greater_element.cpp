//Bismillahir Rahmanir Rahim
//Starting with the name of Almighty Allah
#include <bits/stdc++.h>
#define ll long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rev(v) reverse(v.begin(), v.end())
#define gap " "
#define nl "\n"
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    stack<int>st;
    vector<int>res(n,-1);

    for (int i=0; i<n; i++)
    {


        while(!st.empty() && v[st.top()]<v[i])
        {

            res[st.top()]=v[i];
            st.pop();

        }
        st.push(i);
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" "<<res[i]<<nl;
    }



}


int32_t main()
{
    //fast();

    solve();
    return 0;
}



