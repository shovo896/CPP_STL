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



    sort(v.begin(),v.end());
    vector<int> unique_vec; 
    for(int i = 0; i < v.size(); i++) {
       unique_vec.push_back(v[i]);
       int j = i ; 
       while(j < v.size() && v[i] == v[j]) {
          j++;
       }

       i = j ; 

    }

    for(auto& x : unique_vec){
        cout<<x<<endl; 
    }



    return 0;
}
