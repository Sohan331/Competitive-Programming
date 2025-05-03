#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define nl "\n"
#define ms(v) v.resize(unique(v.begin(), v.end()) - v.begin());

int calPoints(vector<string>& v)
{
    stack<string>st;
    int sum=0,mul=1,v1=0,v2=0;

    for(int i=0; i<v.size(); i++)
    {
        if(v[i]=="D" || v[i]=="+" || v[i]=="C")
        {
            //cout<<"In the main if for the char "<<v[i]<<nl;

            if(st.size()<2 && (v[i]=="+"))
            {
               int haha=1;
            }
            else if(!st.empty())
            {
                if(v[i]=="+" && st.size()>=2)
                {

                    sum+=stoi(st.top());
                    v1=stoi(st.top());
                    st.pop();
                    sum+=stoi(st.top());
                    v2+=stoi(st.top());
                    st.pop();
                    st.push(to_string(v2));
                    st.push(to_string(v1));
                    st.push(to_string(sum));


                   // cout<<"in the second if for else if and v1 v2 and sum is "<<v1<<" "<<v2<<" "<<sum<<st.top()<<nl;
                 sum=0;
                    v1=0;
                    v2=0;
                }
                else if(v[i]=="D" && !st.empty()){
                    mul*=stoi(st.top());
                    mul*=2;
                    st.push(to_string(mul));
                    mul=1;
                    //cout<<"In the condition for D mul and top is "<<mul<<" "<<st.top()<<" "<<st.size()<<nl;
                }
                else if(v[i]=="C" &&  !st.empty()){
                    st.pop();
                   // cout<<"In the C condition"<<nl;
                }

            }
        }
        else
        {
           st.push(v[i]);
        }


    }
long long ans=0;

while(!st.empty()){
//    cout<<st.top()<<" ";
//    st.pop();
ans+=stoi(st.top());
st.pop();
}
//cout<<ans<<nl;
return ans;


}





int main()
{
    fast();
    int t = 1;


    int x;
    cin >> x;
    vector<string> v;
    while (x--)
    {
        string d;
        cin >> d;
        v.push_back(d);
    }

    while (t--)
    {
        calPoints(v);
    }

    return 0;
}

