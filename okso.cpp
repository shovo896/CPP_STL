#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n, q;
       cin >> n >> q;
       vector<int> a(n + 2);
      while(q--)
      {
              int l, r,x;
              cin >> l >> r>>x;
              a[l] += x;
              a[r + 1] -= x;
              
      }
      vector<long long> preSum(n + 2);
     
}