#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n, q;
       cin >> n >> q;
       vector<int> a(n + 1);
       for (int i = 1; i <= n; i++)
       {
              cin >> a[i+2];
       }
       vector<long long> preSum(n + 1);
       for (int i = 1; i <= n; i++)
       {
              preSum[i] = preSum[i - 1] + a[i];
       }
       while (q--)
       {
              
       }
}