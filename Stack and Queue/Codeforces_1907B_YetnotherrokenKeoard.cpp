//Bismillahir Rahmanir Rahim
//Starting with the name of Almighty Allah
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rev(v) reverse(v.begin(), v.end())
#define gap " "
#define nl "\n"
using namespace std;

void solve()
{
    stack<int>cap,sm;

    string s;
    cin>>s;

    int sz=s.size();
    for(int i=0; i<sz; i++)
    {

        if ((cap.empty()) && isupper(s[i]) && s[i]!='B')cap.push(i);
        else if ((sm.empty()) && islower(s[i]) && s[i]!='b')sm.push(i);
        else if(isupper(s[i]) && !cap.empty())
        {
            //cout<<"In the upper for s[i] and i is"<<s[i]<<" "<<i<<nl;
            if(s[i]=='B')
            {
                cap.pop();
            }
            else
            {
                cap.push(i);
            }
        }
        else if(islower(s[i]) && !sm.empty())
        {
            // cout<<"In the lower for s[i] and i is"<<s[i]<<" "<<i<<nl;
            if(s[i]=='b')
            {
                sm.pop();
            }
            else
            {
                sm.push(i);
            }
        }



    }

    string ss="";


    for(int i=sz-1; i>=0; i--)
    {

        if( !cap.empty() && isupper(s[i]) && s[i]!='B')
        {
            if(i==cap.top())
            {
                //cout<<"In the upper for s[i] and i is"<<s[i]<<" "<<i<<nl;
                ss+=s[i];
                cap.pop();
            }
        }
        else if( !sm.empty() && islower(s[i]) && s[i]!='b')
        {
            if(i==sm.top())
            {
                //cout<<"In the lower for s[i] and i is"<<s[i]<<" "<<i<<nl;
                ss+=s[i];
                sm.pop();
            }
        }
    }
    reverse(ss.begin(),ss.end());

    cout<<ss<<nl;
}

int32_t main()
{
    fast();
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}



