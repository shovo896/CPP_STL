#include<bits/stdc++.h>
#define int long long 
#define ll long long 


using namespace std; 

int main(){
       ios_base :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
       vector<pair<int ,string>> a[4];
       for (int i = 0; i < 4; i++){
              cin >> a[i].first >> a[i].second;


       }
       int qry; 
       cin >> qry;
       
       // qry  ---> value Ki ???
      // for (int i = 0; i < 4;i ++){ 
             // a[i].first = qry;
            //  cout << a[i].second << "\n";
       //}
      // sort(a.begin(),a.end());

       map<int, string> mp;
       for (int i = 0; i < 4; i++){
              int age;
              string ageName; 
              cin >> age >> ageName;
              mp[age] = ageName;


       }

       int qry; 
       cin >> qry; 
       cout << mp[qry] << "\n";//n=10^6 hoile login 20 
       return 0; 
}