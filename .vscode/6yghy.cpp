#include<bits/stdc++.h> 
using namespace std;
int compcount = 0;

bool comp (int x ,int y ) {
    return x < y;
}
 

void merge(vector<int> &arr, int lrange, int mid, int rrange) {
    vector<int> L,
    R;
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

void mergeSort(vector<int>& arr, int lrange, int rrange) 
{ 
    if (lrange < rrange) 
    { 
        int mid = lrange + (rrange - lrange) / 2; 
        mergeSort(arr, lrange, mid); 
        mergeSort(arr, mid + 1, rrange); 
        merge(arr, lrange, mid, rrange); 
    } 
}

int main() 
{ 
    vector<int> arr = {12, 11, 13, 5, 6, 7}; 
    int arr_size = arr.size(); 

    mergeSort(arr, 0, arr_size - 1); 

    cout << "Sorted array is \n"; 
    for (int i = 0; i < arr_size; i++) 
        cout << arr[i] << " "; 
        cout << "\n";
    cout << "Number of comparisons: " << compcount << "\n";
    return 0; 
}