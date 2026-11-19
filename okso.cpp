#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n, q;
       cin >> n >> q;
       vector<int> a(n + 2);
      while(q--)
      {
              int l, r;
              cin >> l >> r;
              cout << preSum[r] ^ preSum[l - 1] << endl;
      }
      vector<long long> preSum(n + 2);
     
}