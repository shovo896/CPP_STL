#include<bits/stdc++.h> 
using namespace std;
int main(){
       set <int> st ;
       st.insert(1);
       st.insert(2);
       st.insert(3);
       st.insert(4);
       st.insert(5);
       st.insert(6);
       auto it = st.end();
       it--;
       for (; it != st.begin(); it--){
              cout << *it << " ";
       }
       cout << *it << " ";
       cout << endl;

       auto it1 = st.end();
       it1--;
       for (;;it1 --){
              cout << *it1 << endl;
              if (it1 == st.begin()){
                     break;
              }
              
       }
              return 0;
} 