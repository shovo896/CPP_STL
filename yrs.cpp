#include<bits/stdc++.h>
using namespace std;
int main(){
       string a; 
       cin >> a;
       cout << a <<'\n';
       // size
       sort(a.begin(), a.end());
       cout << a <<'\n';
       for (int i = 0; i< a.size(); i++){
              int x = a[i];
              cout << x <<'\n';
       }
}