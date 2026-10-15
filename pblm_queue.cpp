#include<bits/stdc++.h> 
using namespace std;
using ll = long long; 
#define int long long
void Solve(){
    int n; 
    cin >> n; 
    priority_queue<int> pq;

    for(int i= 1;i<=n;i++){
        int x; 
        cin >> x; 
        pq.push(x);


        // index 1 to i ----> max 3 numbers 
        cout << pq.top() << " ";
    }
}