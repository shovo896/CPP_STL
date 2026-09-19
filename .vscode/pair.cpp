#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std; 
#define int long long 
#define ll long long 
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < n / 2; i++) {
        ans += a[n - 1 - i] - a[i];
    }
    cout << ans << endl;
} 