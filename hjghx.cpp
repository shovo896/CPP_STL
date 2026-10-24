#include<iostream> 
using namespace std; 
bool pabeKina(vector<int> &coins , int target){ 
     if (target == 0){
        return true;
     }
     if (target < 0){
        return false;
     }
     for (int i = 0; i < coins.size(); i++){
        if (pabeKina(coins, target - coins[i])){
            return true;
        }
     }
    return false;
}
int main(){
    vector<int> coins = {1, 2, 5};
    cout << pabeKina(coins, 10) << endl;
    cout << pabeKina(coins, 3) << endl;
    cout << pabeKina(coins, 7) << endl;
    return 0;
}