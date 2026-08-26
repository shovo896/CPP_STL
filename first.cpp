#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize array and demonstrate usage
    int name_of_array[100];
    for(int i = 0; i < 100; ++i) name_of_array[i] = i;
    cout << "first element of array: " << name_of_array[0] << endl;
    vector<int> v;
    v.push_back(10); // add element to vector

    cout << "value of index 0: " << v[0] << endl;
    cout << "size of vector: " << v.size() << endl;

    return 0;
}