#include<bits/stdc++.h> 
int main(){
    int n ;
    cin >> n ;
    for (auto& it : array){
        cin >> it ;
    }

    priority_queue<int,vector<int>,greater<int>> q;
    for(auto& it : array){
        q.push(it);
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout << '\n';


    priority_queue<int> pq;
    multiset<int> s;
    for(auto& it : array){
        s.insert(it);
        cout << *s.rbegin() << " ";
        
        pq.push(it);
        cout << pq.top() << " ";
        // top priority 

    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout << '\n';
}


int main(){ 
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
    int t = 1 ; 

}