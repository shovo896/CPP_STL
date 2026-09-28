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
       for(auto x :st){
              cout << x << " ";
       }
       cout << endl;

       for (auto it =st.begin(); it != st.end(); it++){
              cout << *it << " ";
       }
       cout << endl;

       return 0;
}