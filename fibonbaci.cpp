#include<iostream> 
using namespace std ; 
int main(int n){
    if (n==0){
        return 0 ;
    }
    if (n==1){
        return 1 ;
    }
    return main(n - 1) + main(n - 2) ;
}

int main(){ 
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
    int t = 1 ; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        cout << main(n) << '\n' ; 
    }
}