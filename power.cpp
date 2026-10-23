#include<iostream> 
using namespace std ; 
int pow(int base , int power){ 
    int ans = 1 ; 
    for (int i = 0 ; i < power ; i++){
        ans *= base ;
    }
    return ans ;

}

int main (){ 
    cout << pow(2, 3) << endl ;
    return 0 ; 
    
}