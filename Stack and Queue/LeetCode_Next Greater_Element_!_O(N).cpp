//Bismillahir Rahmanir Rahim
//Starting with the name of Almighty Allah

//This code beats 100% of C++ submissions on LeetCode and Time complexity is O(N) and runtime is 0ms
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
        unordered_map<int,int> res;
        for (int i=0; i<n; i++)
        {  while(!st.empty() && nums2[i] > st.top())
            {
                res[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            ans.push_back(res[nums1[i]] == 0 ? -1 : res[nums1[i]]) ;        
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
