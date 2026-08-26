#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize array to avoid unused variable warning
    int name_of_array[100] = {0};

    vector<int> v;
    v.push_back(10); // add element to vector

    cout << "value of index 0: " << v[0] << endl;
    cout << "size of vector: " << v.size() << endl;

    return 0;
}