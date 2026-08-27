
include<iostream> 
include<vector> 
using namespace std ; 




void printvalue(vector<char>v,int id){
    cout<<v[id]<<endl;
}
int main(){
    vector<char>v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');
    v.push_back('e');
    printvalue(v,2);
    return 0;
}