#include<bits/stdc++.h>
using namespace std;
int main(){
       int n, m; 
       cin >> n >> m; 
       set <int> row ,col;
       for (int i = 0, r, c; i < m;i++){
              cin >> r >> c; 
              row.insert(r);
              col.insert(c);
              cout << (n - row.size()) * (n - col.size()) << "\n";
             
       } 
}