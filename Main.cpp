

#include "MinHeap.h"
#include <iostream>
#include <algorithm>

// tester function for min heap

int main() {
    
    int arr[] = {10, 4, 5, 25, 22, 30, 3, 300, 0, 11};
    
    MinHeap<int> mh1;
    // add elements one-by-one
    for (int i = 0; i < 10; ++i) {mh1.add(arr[i]);}
    // return the 5 smallest values
    for (int i = 0; i < 5; ++i) {
        std::cout << mh1.get_min() << std::endl;
        mh1.rem_min();
    }
    std::cout << std::endl;
    
    std::vector<int> v = {10, 40, -30, 50, 90, 20, -30};
    // initialize from a vector
    MinHeap<int> mh2(v);
    // return the 3 smallest values
    for (int i = 0; i < 3; ++i) {
        std::cout << mh2.get_min() << std::endl;
        mh2.rem_min();
    }    
    
    return 0;
}