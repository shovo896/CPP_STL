#include<iostream> 
using namespace std ; 


void printLastDigit(int n ){ 
if (n <= 0) 
    return ;
cout << n %10 << endl ;
printLastDigit(n / 10) ;
}




int  main(){
    int n = 246135 ; 
    printLastDigit(n) ;
    return 0 ;
}