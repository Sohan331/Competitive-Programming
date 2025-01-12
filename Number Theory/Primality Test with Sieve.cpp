#include <bits/stdc++.h>
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

const int N = 1e7;
bool mark[N];

using namespace std;

int main()
{
   vector<int> prime;

    
   for(int i = 2; i * i<= N ; i++){
    if(mark[i] == false){
        prime.push_back(i);
       for(int j = i*i ; j <= N ; j+=i){
         mark[j] = true;
       }
    }
   }
    

   int t; cin >> t;
   while(t--){

      int n; cin >> n;
      if(mark[n] == false) yes;
      else no;
   }

}