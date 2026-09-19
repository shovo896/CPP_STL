#pragma GCC optimize("ofast")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long

int32_t main()
{
       ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
       int n;
       cin >> n;
       map<string, int> mp;
       int maxVotes = 0;
       while (n--)
       {
              string vote; 
              cin >> vote;
              mp[vote]++;
              maxVotes =max(maxVotes,mp[vote]);
              
       }
       cout << maxVotes << "\n";
      
       return 0;
}