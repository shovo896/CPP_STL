#include<iostream> 
#include<vector> 
using namespace std ; 
int main(){
    vector<int> numbers(5,2) ;
    numbers.push_back(10) ;
    cout<< "size of numbers : " << numbers.size() << endl ; 
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i]<<" " ;
    }
    cout<<endl ;

    // dhet 
    // erase function 

    numbers.erase(numbers.begin() + 2) ;
    cout<< "size of numbers : " << numbers.size() << endl ;
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i]<<" " ;
    }
    cout<<endl ;
    return 0 ; 
}

