#include<iostream>
using namespace std; 
int inversion = 0; 
bool comp(int x, int y) {
    return x < y;
} 

void merge(vector <int> &arr, int lrange, int mid, int rrange) {
    vector<int> L, R;
    for (int i = lrange; i <= mid; i++) 
        L.push_back(arr[i]);
    for (int i = mid + 1; i <= rrange; i++) 
        R.push_back(arr[i]);

    for(auto& it : L) {
       cout << it << " ";
    } 
    cout << endl;
    for(auto& it : R) {
       cout << it << " ";
    } 
    cout << endl;

        { 
              int  r = 0;
              for (int i =0 ; I < L.size(); i++) {
                  while (r+1  < R.size() && L[i] > R[r+1]) {
                      r++;
                  }
                  inversion += r; // Count inversions
              }
        }
    
    int arrPointer = lrange;
    int i = 0, j = 0; 
    while (i < L.size() && j < R.size()) { 
        if (L[i] <= R[j]) { 
            arr[arrPointer] = L[i]; 
            i++; 
        } else { 
            arr[arrPointer] = R[j]; 
            j++; 
            inversion += (mid + 1) - (lrange + i); // Count inversions
        } 
        arrPointer++; 
    }
    while(i < L.size()) { 
        arr[arrPointer] = L[i]; 
        i++; 
        arrPointer++; 
    }
    while(j < R.size()) { 
        arr[arrPointer] = R[j]; 
        j++; 
        arrPointer++;
    }
}




int main() {
    vector<int> arr = {2, 3, 8, 6, 1};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    cout << "Number of inversions: " << inversion << endl;
    return 0;
}