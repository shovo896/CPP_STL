#include <iostream>
#include <vector>
using namespace std;

/*
vec.push_back() O(1)
vec.size() O(1)
*/

int main() {
    // Initialize array and demonstrate usage
    vector<int> numbers ; 
    while(1){
        int x ; 
        cin >> x ; 
        if(x == -1) break ;
        numbers.push_back(x) ;

        cout<<numbers.size() << endl ;
    }
    cout<<numbers.size() << endl ;
    sort(numbers.begin(),numbers.end());

    for(int i = 0 ; i < numbers.size() ; i++){
        cout<<numbers[i]<<" " ;
    }

    return 0;
}