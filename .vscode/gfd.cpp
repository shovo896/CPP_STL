#include<bits/stdc++.h> 
using namespace std;

vector<int> stored(100,-1);
// stored [i] = factorial of i
int facto(int x){
      // Base case
     // if(x <= 1 )
     //         return 1;
      // if (stored[x] != -1)
         //     return stored[x];
      // else
             // stored[x] = x * facto(x - 1);
             // return stored[x];
}
int main(){ 
       stored[0] = 1;
       for(int i = 1; i < 100; i++)
             stored[i] = i * stored[i - 1];
       cout << facto(5) << endl;
       return 0;
}