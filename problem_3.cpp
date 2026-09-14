#include<bits/stdc++.h>
using namespace std;
int main(){
       string s; 
       cin >> s;
       string ans; 
       for (auto  x : s){
              x = tolower(x);
              if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'|| x == 'y'){
                     continue; 
              }
              ans += "." + x;

       }
       cout << ans << endl;

}