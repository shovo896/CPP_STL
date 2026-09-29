#include <bits/stdc++.h>
using namespace std;
int main()
{
       st.insert(6);
       st.insert(7);
       cout <<st.size() << endl;
       auto it = st.upper_bound(4);
       it--; 
       cout <<*it <<endl;
       return 0; 
}