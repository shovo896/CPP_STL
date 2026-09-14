#include<bits/stdc++.h>
using namespace std;
int main(){
       string s1, s2; 
       cin >> s1 >> s2; 
       for (auto x : s1){
              x = tolower(x);
       }
       for (auto x : s2){
              x = tolower(x);
       }
       cout << s1 << "\n"; 
       cout << s2 << "\n";
       if (s1<s2){
              cout << -1 << endl;
       }
       else if (s1>s2){
              cout << 1 << endl;
       }
       else{
              cout << "0\n" << endl;
       }
}