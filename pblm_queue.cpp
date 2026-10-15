#include<iostream> 
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
        if (i <= 2 ){ 
            cout << "-1\n";
            continue; 
        }
        int max1 = pq.top();
        pq.top(); pq.pop();
        int max2 = pq.top();
        cout<< max2 << "\n"; 
        pq.push(max1);
        int max3 = pq.top(); 
        cout << max3 << "\n"; 
        




        // index 1 to i ----> max 3 numbers 
        cout << pq.top() << " ";

    }
}