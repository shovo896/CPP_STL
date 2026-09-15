#include<bits/stdc++.h> 
using namespace std; 
int cntVowel(string s){
       int cnt = 0; 
       for (auto x :s){
              cnt += (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U');
       }
       return cnt;

       int main(){
              string s1, s2, s3;
              bool ans = true;
              getline(cin, s1);
              if (cntVowel(s1)!=5) ans = false;
              getline(cin, s2); 
              if (cntVowel(s2)!=7) ans = false; 
              getline(cin, s3); 
              if (cntVowel(s3)!=5) ans = false; 
              if (ans) cout << "YES\n";
              else cout << "NO\n";
       }
}