#include<bits/stdc++.h>
using namespace std;
int main(){
       string st= "madam";
       string tmp= reverse(st.begin(), st.end());
       if (st == tmp){
              cout << "It is a nkh palindrome." << endl;
       }
       else{
              cout << "It is not a palindrome." << endl;
       }
}