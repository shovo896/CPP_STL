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
              bwd.push("http://www.lightoj.com/");
              
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
                            if (fwd.size()==0){ 
                                   cout << "Ignored\n";
                            }
                            else { 
                                   string tmp  = fwd.top();
                                   fwd.pop();
                                   bwd.push(tmp); 

                            }
                     }
                     else if(op== "Back") {
                                   if (bwd.size()== 0 ){ 
                                          cout << "Ignored\n"; 
                                   }
                                   else { 
                                          string tmp = bwd.top();
                                          bwd.pop();
                                          fwd.push(tmp);
                                   } 
                                   else { 
                                         break;  
                                   }
                                   
                            }
       
                     }

              }


       }