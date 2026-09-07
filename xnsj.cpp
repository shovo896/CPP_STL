#include<bits/stdc++.h>
using namespace std;
int main(){
       //string st[5];
       vector<string> st(5);
       for (int i = 0; i<5; i++){
              cin >> st[i];
       }
       cout << st[2] << '\n';
       sort(st.begin(), st.end());
       for (int i = 0; i < 5;i++){
              cout << st[i] << '\n';
       }
              cout << st[2] << '\n';
}
