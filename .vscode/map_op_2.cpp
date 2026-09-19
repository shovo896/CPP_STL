#include <bits/stdc++.h>
using namespace std;

int main()
{
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int n;
       cin >> n;

       map<int, string> mp;

       for (int i = 0; i < n; i++)
       {
              int x;
              string y;
              cin >> x >> y;
              mp[x] = y;
       }

       for (const auto &it : mp)
       {
              cout << it.first << ' ' << it.second << '\n';
       }

       return 0;
}