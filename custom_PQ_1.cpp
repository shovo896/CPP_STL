#include<iostream> 
using namespace std;
using ll = long long; 
#define int long long
bool comp(int &x,int &y){
    return abs(x)>abs(y); 
}
struct customComp{
    bool operator()(int &x,int &y){
        return abs(x)>abs(y); 
    }
};
void Solve(){
    int n; 
    cin >> n; 
    int a[n];
    for(auto& it : a){
        cin >> it;
    }
    sort(a,a+n,comp);
        return abs(x)>abs(y); 
    };

    for (auto& it : a){
        cout<<it<<" ";
    
    
    } 





} 