#include<bits/stdc++.h> 
using namespace std;
bool comp(int x ,int y){
       return x < y;
}
vector<int> merge(vector<int>L , vector<int>R){
       vector<int> result;
       int i = 0, j = 0; 
       while(i < L.size() && j < R.size()){
              if(L[i] < R[j]){
                     result.push_back(L[i]);
                     i++;
              }
              else{
                     result.push_back(R[j]);
                     j++;
              }
       }
       while(i < L.size()){
              result.push_back(L[i]);
              i++;
       }
       while(j < R.size()){
              result.push_back(R[j]);
              j++;
       }
       return result;

}

int main()
{ 
       vector<int> L = {2,3,4,5,6,7,8};
       vector<int> R = {1,2,3,4,5,6,7};
       merge(L,R);
       for (auto &it : merged) {
              cout << it << " ";
       }
       return 0; 

}

