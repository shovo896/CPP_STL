#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
       int n, q; 
       cin >> n >> q;

       // prefix sum 
       vector<int> arr(n+1);
       for (int i = 1; i <=n ; i++) {
           cin >> arr[i];
           arr[i] += arr[i-1]; // prefix sum
       }
       vector<long long> preSum(n - 1);
}