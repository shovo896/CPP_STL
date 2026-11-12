#include<iostream> 
using namespace std; 

int main() {
       int n, q; 
       cin >> n >> q; 
       vector<int> arr(n+1);
       for (int i = 1; i <=n ; i++) {
           cin >> arr[i];
       }
       vector<long long> preSum(n + 1);
       for (int i = 1; i <= n; i++) {
           preSum[i] = preSum[i - 1] + arr[i];
       }
       while(q--){ 
              int l, r; 
              cin >> l >> r;
              long long sum = 0;
              for (int i = l; i <= r; i++) {
                  sum += arr[i];
              }
              cout << sum << endl; 

       }

       // preSum[5] = preSum[4] + arr[5] = 10 + 5 = 15

       

}