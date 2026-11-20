#include<bits /stdc++.h> 
using namespace std; 
int main(){ 
       int n,x ; 
       cim >> n >> x; 
       vector<int> a(n + 1);
       for(int i = 1; i <= n; i++){ 
              cin >> a[i]; 
       }
       vector<int> pre(n + 1);
       for (int i = 1; i <= n; i++){ 
              pre[i] = pre[i - 1] + a[i]; 
       }
}