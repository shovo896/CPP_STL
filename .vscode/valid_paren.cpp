#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define vii vector<pair<ll,ll>>
#define F first 
#define S second 
const ll N = (ll) 3e+5;
const ll mod = (ll) 1e+9 + 7;
const ll inf = (ll) 1e+18;

int main(){ 
       ios_base ::sync_with_stdio(0);
       cin.tie(0);
       int t = 1; 
        while(t--){
               ll, a, b b, c, i, j, k, m, n, o, x, y, z;
               string s;
               cin >> s; 

               stack <char> rbs;
               bool flag = true;
               for (i = 0; i < s.size();i++){
                      if(s[i]== '('){ 
                            rbs.push('(');
                      }
                      else { 
                            if (rbs.size() > 0) {
                                   rbs.pop();
                            }else {
                                   flag = false;
                                   break;
                            }

                            if (rbs.size()){ 
                                   flag = false;
                            }

                            if (flag == true ){ 
                                   cout << "YES\n";
                            }
                            else { 
                                   cout << "no\n";
                            }
                      }

               }
        }
}