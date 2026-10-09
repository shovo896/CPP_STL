#include<bits/stdc++.h> 
using namespace std; 
int main() {
       ios_base::sync_with_stdio(0); 
       cin.tie(0); 
       int t =1 ; 
       cin >> t; 
       while(t--){
              ll a, b, c, i, j, k, m, n, o, x, y, z; 
              stack <string> fwd,bwd;
              string op ;
              cin >> op;
              
              while(cin >> op && op != "QUIT"){ 
                     if (op == "VISIT"){
                            string url; 
                            cin >> url;  
                           while(fwd.size()){ 
                                  fwd.pop();
                           }
                           bwd .push(url);

                     }
                     else if (op == " Forward"){
                            
                     }

              }

       }
}