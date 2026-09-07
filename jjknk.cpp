#include<bits/stdc++.h>
using namespace std;
int main(){
       string st = "madam";
       string tmp = "mmaad";
       sort(tmp.begin(), tmp.end());
       sort(st.begin(), st.end());
       if (st == tmp){
              cout << "It is an anagram." << endl;
       }
       else{
              cout << "It is not an anagram." << endl;
       }
}