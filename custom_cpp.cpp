#include<iostream> 
using namespace std;
using ll = long long; 
#define int long long
void solve(){ 
    int n; 
    cin >> n; 
    priority_queue<int,vector<int>,greater<int>> pq;
    while(n--){ 
        int x; 
        cin >> x; 
        pq.push(x);

        

    }
    int ans = 0 ; 
    while(pq.size() > 1){ 
        int smoll1 = pq.top(); 
        pq.pop();
        int smoll2 = pq.top(); 
        pq.pop();
        ans += (smoll1 + smoll2);
        pq.push(smoll1 + smoll2);
    }
    cout << ans << "\n";
}