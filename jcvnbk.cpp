
#include <iostream>
#include <vector>
using namespace std ; 


// pass by value 
// pass by reference





void printvalue(const vector<char>&v,int id){
    cout<<v[id]<<endl;
}
void changevalue(vector<char>&v,int id,char value){
    v[id] = value;
}
int main(){
    vector<char>v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    v.push_back('e');
    printvalue(v,2);
    changevalue(v,2,'z');
    cout<<v[2]<<endl; 
    for(auto& x : v){
        cout<<x<<" " ;
    }
    return 0;
}
