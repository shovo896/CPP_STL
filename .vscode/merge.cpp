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
       for(int i = lrange,j =0,i < = rrange;i++,j++){
              unsorted[i] = result[j];
       }
       return result;

}
void mergesort(vector<int>& unsorted, int i ,int j){ 
       if(i == j) return;
       int mid = (i + j) / 2;
       mergesort(unsorted, i, mid);
       mergesort(unsorted, mid + 1, j);
}
void mergesort(vector<int>& unsorted ,int i ,int j){ 
       if (i == j) return;
       if(i > j) return;
       if (i < j){
              int mid = (i + j) / 2;
              mergesort(unsorted, i, mid);
              mergesort(unsorted, mid + 1, j);
              vector<int> L(unsorted.begin() + i, unsorted.begin() + mid + 1);
              vector<int> R(unsorted.begin() + mid + 1, unsorted.begin() + j + 1);
              vector<int> merged = merge(L, R);
              for(int k = 0; k < merged.size(); k++){
                     unsorted[i + k] = merged[k];
              }
       }
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

