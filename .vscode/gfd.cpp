#include<bits/stdc++.h> 
using namespace std;

vector<int> stored(100,-1);
// stored [i] = factorial of i
int facto(int x){
       if(x <= 1 )
              return 1;
       if (stored[x] != -1)
              return stored[x];
       else
              stored[x] = x * facto(x - 1);
              return stored[x];
}
int main(){ 
       cout << facto(5) << endl;
       return 0;
}