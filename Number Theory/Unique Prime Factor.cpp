#include<bits/stdc++.h> 

const int N = 1e5;
bool mark[N];

using namespace std;

vector<int> p[N];

int main()
{
    for(int i=2; i<N; i++)
    {
        if(mark[i] == false)
        {
            p[i].push_back(i);
            for(int j=2*i; j<=N; j+=i)
            {
                p[j].push_back(i);
                mark[j] = true;
            }
        }
    }
    for(int i:p[6])cout<<i<<endl;
}