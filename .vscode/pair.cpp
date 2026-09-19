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

    vector<vector<int>> aght(3,vector<int>(2));
    for (int i = 0; i < 3; i++){
       cin >> aght[i][0] >> aght[i][1];
    }
    for (int i = 0; i < 3; i++){
       cout << aght[i][0]<<""<< aght[i][1]<<"\n";
       sort(aght, aght + 3);
       for (int i = 0; i < 3; i++){
              cout << aght[i][0]<<""<<aght[i][1]<<"\n";
       }
    }
    sort(aght, aght + 3);
    for (int i = 0; i < 3; i++){
           cout << aght[i][0]<< ""<< aght[i][1]<<"\n";
    }
           return 0;
} 