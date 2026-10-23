#include<iostream> 
using namespace std ; 


void printLastDigit(int n ){ 
    cout << n % 10 <<endl ;
    printLastDigit(n / 10) ;
}




int  main(){
    int n = 246135 ; 
    while(n > 0 ){ 
        int lastDigit = n % 10 ; 
        cout  << n <<endl ; 
        cout << lastDigit<<endl ; 
        n = n / 10 ;
    }
}