#include<iostream> 
using namespace std;
using ll = long long; 
#define int long long
void solve(){ 
    ll n ; 
    cin >> n ; 
    int a[n+1]; 
    // {1,n}

    priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq ; 
    pq.push({n,1}) ;
    for(int op=1 ; op <= n;op++){
        auto[l,r] = pq.top();// .left most largest and left most length 
        if((r-l+1)&1) { 
            a[(r+l)/2] = i,pq.push({l,(r+l/2)-1}),pq.push({(r+l)/2+1,r}) ; 

        }
        else : 
        {
            a[(r+l-1)/2] = i; pq.push({l,(r+l-1)/2-1}),pq.push({(r+l-1)/2+1,r}) ;
        }
    }
    for(int i=1 ; i <= n ; i++) cout << a[i] << " " ;

}