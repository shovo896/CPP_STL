#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
       int n, q; 
       cin >> n >> q;
       while(q--){
              int l, r; 

       }
       vector<long long> preSum(n + 2);
       for (int i = 1; i <= n; i++){ 
              preSum[i] = preSum[i - 1] + a[i];
              cout << preSum[i] << " ";
       }
}