#include <bits/stdc++.h>
#define int long long
#define ll long long

using namespace std;

int main()
{
       ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
       int n = 5; 
       map<int, string> mp;
       cin >> n;
       for (int i = 0; i < n;i++){ 
              int x ,y ; 
              cin >> x >> y; 
              mp[x] = y;
       }
       for (auto& it : mp){ 
              cout << it.first << " " << it.second << "\n";
       }

              return 0; 
} 