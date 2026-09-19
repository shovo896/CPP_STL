#include <bits/stdc++.h>
using namespace std;

int main()
{
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int n;
       cin >> n;

       map<int, string> mp;

       //for (int i = 0; i < n; i++)
       //{
           //   int x;
             // string y;
             // cin >> x >> y;
             // mp[x] = y;
       //}

       //for (const auto &it : mp)
       //{
           //   cout << it.first << ' ' << it.second << '\n';
       //}

       mp.insert(3,4);
       mp.insert(2,3);
       mp.insert(3,4);

       // check exist or not 

       if (mp.find(3) != mp.end()){
              cout <<"2 does not exist in the map\n";

       }
       else {
              cout <<"2d does not exist"
       }

       for(auto& it : mp)
       {
              cout << it.first << " " << it.second << "\n";
       }

       pair < string, pair<double, int> person; 
       cin >> person.first; 
       cin >> person.second.first; 
       cin >> person.second.second;
       
       cout<<mp[2]<<"\n";

       return 0;
}