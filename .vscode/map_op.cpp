#include <bits/stdc++.h>
#define int long long
#define ll long long

using namespace std;
int main(){
       ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
       map <int ,int> mp;
       mp[3] = 7;
       mp[1] = 8;
       mp[10] = 100; 
       cout << mp[3] << " " << mp[1] << " " << mp[10] << "\n";

       /// access and edit
       mp[10] = 90;
       cout << mp[10] << "\n";

       //cout << mp[0] << "\n"; // 0

       // iteration through map 
       cout <<mp[2] << "\n"; // 0

       for(auto& it : mp){
              //cout << it.first << " " << it.second << "\n";

              cout << it.first << " " << it.second << "\n";


       }

       // map e kono index nai to 