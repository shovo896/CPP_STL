#include <bits/stdc++.h>
using namespace std;
int main()
{
       set<int> st;
       st.insert(1);
       st.insert(2);
       st.insert(3);
       st.insert(4);
       st.insert(5);
       st.insert(6);
       auto it = st.upper_bound(4);
       it--; 
       cout <<*it <<endl;
       return 0; 
}