#include<bits/stdc++.h>
using namespace std;
int main(){
       string st = "abcd";
       for (int i = 0; i < 4;i++){
              for (int j = 1; j <= 4-i;j++){
                     cout << st.substr(i, j) <<'\n';
              }
       }
}