#include<bits/stdc++.h> 
int main(){
    queue<int> q;
    for(auto& it : array){
        q.push(it);
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout << '\n';


    priority_queue<int> pq;
    for(auto& it : array){
        pq.push(it);
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