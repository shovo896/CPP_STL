#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std; 
#define int long long 
#define ll long long 
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    pair<int, int> aght[3];
    for (int i = 0; i < 3;i++){
       cin >> aght[i].first >> aght[i].second;
    }
    sort(aght, aght + 3);
    for (int i = 0; i < 3;i++){
           cout << aght[i].first << "" << aght[i].second << "\n";
    }

    int aght[3][2];
    for (int i = 0; i < 3; i++){
       cout << aght[i].first<<""<<aght[i].second<<"\n";
       sort(aght, aght + 3);
       for (int i = 0; i < 3; i++){
              cout << aght[i][0]<<""<<aght[i].second<<"\n";
       }
    }
           return 0;
} 