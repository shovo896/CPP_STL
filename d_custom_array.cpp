#include<iostream> 
using namespace std;
using ll = long long; 
#define int long long

struct comp { 
    bool operator()(pair <int,int> &x ,pair<int,int> &y){

        // boro range age thakbe 
        int len1 = (x.second - x.first + 1) ;
        int len2 = (y.second - y.first + 1) ;
        if(len1 != len2) return x.first <  y.first ;
        // leftmost 

        // [1,7] [2,8]




        return x.first > y.first ;







    }
}
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