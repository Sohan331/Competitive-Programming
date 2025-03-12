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

bool isValid(string s)
{
    stack<char>br;

    int f=0;

    int sz=s.size();

    for(int i=0; i<sz; i++)
    {

        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            br.push(s[i]);
        }
        else
        {
            if(br.size()==0)
            {
                f=1;
                return false;
            }

            if(br.top()=='(' && s[i]==')')
            {
                //cout<<"S of i and br top"<<s[i]<<" "<<br.top()<<nl;
               // cnt++;
                br.pop();

            }
            else if(br.top()=='{' && s[i]=='}')
            {
                //cout<<"S of i and br top"<<s[i]<<" "<<br.top()<<nl;
               // cnt++;
                br.pop();
            }
            else if(br.top()=='[' && s[i]==']')
            {
                //cnt++;

                //cout<<"S of i and br top"<<s[i]<<" "<<br.top()<<nl;
                br.pop();

            }


        }

    }

    return br.empty();



}

int32_t main()
{
    fast();

    string s;
    getline(cin,s);
//    int tc;
//    cin>>tc;
//    while(tc--)
//    {
//        solve();
//    }
    cout<<isValid(s)<<nl;

    return 0;
}



