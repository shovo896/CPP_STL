#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
       ios:: sync_with_stdio(false);
       cin.tie(0);
       int t; cin >> t; 
       while(t--){ 
              int n; cin >> n;
              vector<int> a(n);
              for (int i = 0; i < n; i++){
                     cin >> a[i];
              }
              sort(a.begin(), a.end());
              vector<int> left;
              for(int i = 0; i < n; i++){
                     if(i == 0 || a[i] != a[i-1]){
                            left.push_back(a[i]);
                     }
                     else { 
                            right.push_back(a[i]);
                     }
              }
       }
}