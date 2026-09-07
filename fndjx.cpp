#include<bits/stdc++.h>
using namespace std;
int main(){
       string st = "abcd1234";
       cout << st.substr(0, 4) <<'\n';
       cout << st;
       
       st.erase(0, 4);
       cout << st <<'\n';

}