#include<iostream> 
using namespace std ; 
int pow(int base ,int power){ 
    cout << "base = " << base << " power = " << power << endl ;
    if (power == 0){
        return 1 ;
    }
    return base * pow(base , power - 1) ;
}

int main (){ 
    cout << pow(4, 3) << endl ;
    return 0 ; 
    
}