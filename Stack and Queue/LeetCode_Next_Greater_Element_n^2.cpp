//Bismillahir Rahmanir Rahim
//Starting with the name of Almighty Allah

//The time complexity of this code is O(n*m) where n is the size of nums1 and m is the size of nums2
//The space complexity of this code is O(n) where n is the size of nums1

#include <bits/stdc++.h>
#define ll long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rev(v) reverse(v.begin(), v.end())
#define gap " "
#define nl "\n"
using namespace std;


vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
{
    vector<int>v;

    auto mxx=max_element(nums2.begin(),nums2.end());

    int b=nums2.back();


    int f=0;
    for(int i=0; i<nums1.size(); i++)
    {
        int mx=nums1[i];
        f =0;
        
        if (mx!=*mxx && mx!=b)
        {
            for(int j=0; j<nums2.size(); j++)
            {
                if (nums2[j]== mx)
                {
                    f=1;
                }
               
                if(mx<nums2[j] && f==1)
                {
                    mx=nums2[j];
                    
                    break;
                }
            }
        }

        if(mx==nums1[i])
        {
            v.push_back(-1);
        }
        else
        {
            v.push_back(mx);

        }
    }

    return v;
}


int32_t main()
{
    fast();

    int n, m;
    cin >> n >> m;
    vector<int> nums1(n), nums2(m);

    for (int i = 0; i < n; i++) cin >> nums1[i];
    for (int i = 0; i < m; i++) cin >> nums2[i];

    
    vector<int> result = nextGreaterElement(nums1, nums2);

   
    cout << "[";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]\n";

    return 0;
}



