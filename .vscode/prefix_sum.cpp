#include<iostream> 
using namespace std; 

int main() {
       int n, q; 
       cin >> n >> q; 
       vector<int> arr(n+1);
       for (int i = 1; i <=n ; i++) {
           cin >> arr[i];
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
}