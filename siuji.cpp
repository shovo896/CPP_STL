#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
       int n, q; 
       cin >> n >> q;
       map<int, int> cnt; 
       while(q--){
              int l, r;
              cin >> l >> r; 
              cnt[l]++; 
              cnt[r+1]--; 

       }
       vector<int> a(1);
       for(auto [x,u] : cnt){
              a.push_back(u);
              cout << a[i] << " ";
       }
       n= a.size()+1;
       vector<long long> preSum(n + 2);
       for (int i = 1; i <= n; i++){ 
              preSum[i] = preSum[i - 1] + a[i];
              cout << preSum[i] << " ";
       }
}