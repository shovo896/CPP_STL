#include<bits/stdc++.h> 
usimg namespace std; 
int main(){ 
       int n, q; 
       cin >> n >> q; 
       for (int i = 1; i <=n ; i++) {
           cin >> arr[i];
           arr[i] += arr[i-1]; // prefix sum
       } 
       vector<long  long > preSum(n + 1);
       for (int i = 1; i <= n; i++) {
           preSum[i] = preSum[i - 1] + arr[i];
       }
       long long ans = a[1];
       long long min_found = 0;
       for (int i = 1; i <= n; i++) {
           min_found = min(min_found, preSum[i]);
           ans = max(ans, preSum[i] - min_found);
           min_found = min(min_found, preSum[i]);
       } 
}