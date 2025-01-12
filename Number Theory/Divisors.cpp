#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    set<int> s;
    cin >> n;
    for (int i = 1; i * i <=n; i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
    }
    for (auto j : s)  cout << j << endl;
}