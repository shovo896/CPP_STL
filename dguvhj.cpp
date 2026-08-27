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
    v.push_back('10');
    v.push_back('30');
    v.push_back('34');
    v.push_back('67');
    v.push_back('45');


    
   

    for(auto& x : v){
        cout<<x<<" " ;
    }

    //sort(v.begin()+2,v.end()) ;
    sort(v.begin(),v.end()) ;
    unique(v.begin(),v.end()) ;
//v.erase(unique(v.begin(),v.end()),v.end()) ;
    auto it = unique(v.begin(),v.end()) ;
    v.erase(it,v.end()) ;
    for(auto& x : v){
        cout<<x<<" " ;
    }



    return 0;
}
