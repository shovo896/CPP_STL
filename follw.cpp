#include<iostream> 
using namespace std ; 
int  main(){
    int n = 246135 ; 
    while(n > 0 ){ 
        int lastDigit = n % 10 ; 
        cout  << n <<endl ; 
        cout << lastDigit<<endl ; 
        n = n / 10 ;
    }
}