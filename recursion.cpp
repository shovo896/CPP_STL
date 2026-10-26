#include<bits/stdc++.h> 
using namespace std ;
int fact(int x){ 
    if (x<1)
        return 1;
    else
        return x * fact(x - 1);
}


int main(){ 
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
    int t = 1 ; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        cout << fact(n) << '\n' ; 
    }
}