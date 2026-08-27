#include<iostream> 
#include<vector> 
using namespace std ; 
int main(){
    vector<int> numbers ;
    numbers.push_back(10) ;
    cout<< "size of numbers : " << numbers.size() << endl ; 
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i]<<" " ;
    }
    cout<<endl ;

    // dhet 
    return 0 ; 
}