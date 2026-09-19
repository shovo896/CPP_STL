#pragma GCC optimize("ofast")
#include <bits/stdc++.h> 
using namespace std; 
#define int long long 
#define ll long long 

int32_t main(){
       ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
       int n ;
       cin >> n >> k;
       map<string, int> mp;
       while (n--){
              string friendName;
              int giftVal; 
              cin >> friendName >> giftVal;
              mp[friendName] = giftVal;
       }
       vector<int> costs; 
       for(auto& it : mp ){
              costs.push_back(it.second);
              int savings = 0 ; 
              sort(costs.rbegin(), costs.rend());
              for(int i =0 ; i< k && i < costs.size(); i++){
                     savings += costs[i];

              cout << sa
              }
       }
}