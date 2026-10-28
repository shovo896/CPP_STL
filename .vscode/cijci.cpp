#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
using namespace std; 
using ll = long long; 
#define int long long 
void solve(){
       int n; 
       cin >> n;
       int a[n]; 
       for(auto& it : a) cin >> it;
       vector<int> cost(n , INT_MAX);
       cost[0] = 0; 
       cost[1]= abs(h[0] - h[1]);
       for(int i = 2; i < n; i++){
              cost[i] = min(cost[i-1] + abs(h[i] - h[i-1]), cost[i-2] + abs(h[i] - h[i-2]));
       }

}
int 32_t main(){
       ios_base::sync_with_stdio(0);
       int t = 1; 
       cin.tie(0);
       solve();
       return 0;
}