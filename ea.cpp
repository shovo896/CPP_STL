#include<bits/stdc++.h>
using namespace std;
int main(){
       string st="dLmNk";
       for (auto &x : st){
              x = tolower(x);
              cout << x <<'\n';
              cout << (char)tolower(x) <<'\n';
       }
       cout << endl; 
       cout << st <<'\n';   
}