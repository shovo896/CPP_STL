#include<bits/stdc++.h>
using namespace std;
int main(){
       string st="dLmNk";
       for (auto &x : st){
             if (x >= 'A' && x <= 'Z'){
                    x = tolower(x);
             }
             else if (x >= 'a' && x <= 'z'){
                    x = toupper(x);
             }
       }
       cout << endl; 
       cout << st <<'\n';   
}