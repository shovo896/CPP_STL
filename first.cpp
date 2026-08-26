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
    cout<< "size of numbers : " << numbers.size() << endl ;

    numbers.push_back(10) ; 

    cout<< "size of numbers : " << numbers.size() << endl ; 
    numbers.push_back(2);

    cout<< "size of numbers : " << numbers.size() << endl ; 
    cout<< "first element : " << *numbers.begin() << endl ;
    
    cout << *numbers.begin() << endl ;

    cout << "last element : " << *(numbers.end() - 1) << endl ;

    while(1){
        int x ; 
        cin >> x ; 
        if(x == -1) break ;
        numbers.push_back(x) ;
        cout<< "size of numbers : " << numbers.size() << endl ;
    }
    cout<<numbers.size() << endl ;
    sort(numbers.begin(),numbers.end());

    for(int i = 0 ; i < numbers.size() ; i++){
        cout<<numbers[i]<<" " ;
    }
    cout<<endl;
    

    return 0;
}