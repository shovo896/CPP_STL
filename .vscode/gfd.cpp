#include<bits/stdc++.h> 
using namespace std; 
int facto(int x){
       if(x <= 1 )
              return 1;
       return x * facto(x - 1);
}
int main(){ 
       cout << facto(5) << endl;
       return 0;
}