#pragma GCC optimize ("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
#define int long long 
int calc (int n){ 
       if (n == 0) return 0;
       int ans = INT_MAX; 
       int tmp = n ; 
       while (tmp > 0 ){
              int lastDigit = tmp % 10; 
              if (lastDigit != 0 ){ 
                     ans = min(ans, 1 + calc(n - lastDigit));
              }
              return ans; 
       }
}
void Solve(){ 
       int n; 
       cin >> n; 
       cout << calc(n) << endl; 
}
int main(){
       Solve();
       return 0;
}