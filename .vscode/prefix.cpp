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
}