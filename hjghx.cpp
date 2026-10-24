#include<iostream> 
using namespace std; 
bool pabeKina(vector<int> &coins , int target){ 
    if (pabeKina(coins, target - coins[0])){ 
        return true; 

    }
    return false;
}
int main(){
    vector<int> coins = {1, 2, 5};
    cout << pabeKina(coins, 10) << endl;
    return 0;
}