#include<bits/stdc++.h>
using namespace std; 
int main(){
       int t; 
       cin  >> t; 
       while (t--){
              string s; 
              cin >> s;
              string t1 = s, t2 = s; 
              sort(t1.begin(), t1.end());
              reverse(t2.begin(), t2.end());
              if (t1== t2){
                     cout <<"No answer\n";
                     continue; 

              }
              int n = s.size();
              for (int i = n - 1; i > 0;i--){
                     int temp = -1;
                     for (int j = i+1; j < n; j++){
                            if (s[i] < s[j]){
                                   if (s[i]<s[j]){
                                          if (temp==-1){
                                                 temp = j;
                                          }
                                   }

                                   temp = j;
                                   break;
                            }
                     }
                     if (temp != -1){
                            swap(s[i], s[temp]);
                            reverse(s.begin() + i + 1, s.end());
                            cout << s << "\n";
                            break;
                     }
              }
       }
}