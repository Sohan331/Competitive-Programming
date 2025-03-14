//Bismillahir Rahmanir Rahim
//Starting with the name of Almighty Allah
#include <bits/stdc++.h>
#define ll long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rev(v) reverse(v.begin(), v.end())
#define gap " "
#define nl "\n"
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
{
    int n = nums2.size();
    stack<int> st;
    vector<int> res(n, -1);

    auto mx=max_element(nums2.begin(),nums2.end());
    int bk=nums2.back();
    //cout<<"***"<<*mx<<" "<<bk<<endl;

    vector<int>index(*mx+1);
     for (int i = 0; i < n; i++) {
        index[nums2[i]] = i;
    }
    for (int i=0; i<n; i++)
    {


        while(!st.empty() && nums2[st.top()]<nums2[i])
        {

            res[st.top()]=nums2[i];
            st.pop();

        }
        st.push(i);
    }


vector<int> ans;
for (int i = 0; i < nums1.size(); i++) {
        int idx = index[nums1[i]];
        ans.push_back(res[idx]);
    }

for(int i=0; i<ans.size(); i++)
{
  cout<<ans[i]<<" ";

}

return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums1(n), nums2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> nums2[i];
    }

    vector<int> ans = nextGreaterElement(nums1, nums2);

//    cout << "[";
//    for (int i = 0; i < ans.size(); i++)
//    {
//        cout << ans[i];
//        if (i < ans.size() - 1) cout << ",";
//    }
//    cout << "]\n";

    return 0;
}
