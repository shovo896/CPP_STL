#include<bits/stdc++.h> 
using namespace std; 
vector<int>L,R ;
for (int i = lrange; i <= mid; i++) 
    L.push_back(arr[i]);

for (int i = mid + 1; i <= rrange; i++) 
    R.push_back(arr[i]);

int arrPointer = 0;
int i = 0 ,j =0 ; 
while (i < L.size() && j < R.size()) 
{ 
    if (L[i] <= R[j]) 
    { 
        arr[arrPointer] = L[i]; 
        i++; 
    } 
    else
    { 
        arr[arrPointer] = R[j]; 
        j++; 
    } 
    arrPointer++; 
}
while(i < L.size()) 
{ 
    arr[arrPointer] = L[i]; 
    i++; 
    arrPointer++; 
}
while(j < R.size()) 
{ 
    arr[arrPointer] = R[j]; 
    j++; 
    arrPointer++; 
}