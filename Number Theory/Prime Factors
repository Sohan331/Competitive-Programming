#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    set<int> s;
    cin >> n;
    int cnt = 0, tmp = n;
    for (int i = 2; i * i <= n; i++)
    {
        while (tmp % i == 0)
        {
            tmp /= i;
            s.insert(i);
        }
    }
    if(tmp > 1) s.insert(tmp); // Don't forget to think for 35 

    for (auto j : s) cout << j << endl;
}