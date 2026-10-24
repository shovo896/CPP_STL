#include<iostream> 
using  namespace std;

 

int Pow(int base , int power){
    if (power == 0)
        return 1;
    int half = Pow(base, power / 2);
    return half * half * (power % 2 ? base : 1);
}
int main(){
    cout <<Pow(2, 10) << endl;
    return 0; 
    
}