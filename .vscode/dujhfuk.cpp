#include<iostream> 
using namespace std ; 
const int MAX = 100005;
int stored[MAX];
void Solve(){
       int n;
       cin >> n; 
       stored[0] = 0;
       for (int i = 1; i <= n; i++){
              int ans = INT_MAX;
              int tmp = n; 
              while(tmp > 0 ){ 
                     int lastDigit = tmp % 10;
                     if (lastDigit != 0 ){
                            ans = min(ans, 1 + stored[i - lastDigit]);
                     }
                     tmp /= 10;
              }
              stored[i] = ans;
       }
       cout << stored[n] << endl;
}
int32_t main(){
       ios_base ::sync_with_stdio(0);
       cin.tie(0);
       Solve();
       return 0;
}
