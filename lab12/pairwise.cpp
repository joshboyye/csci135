/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12 

This program will create a function that sums two vectors pairwise.


*/

#include <iostream>
#include <vector>
#include <algorithm> // for std::max

using namespace std;

vector<int> sumPairWise(vector<int>& v1, vector<int>& v2) {
    // Get the size of the larger vector
    size_t size = max(v1.size(), v2.size());
    // Initialize the result vector with the size
    vector<int> result(size, 0);//initialize the vector with size and 0

    for (size_t i = 0; i < size; ++i) {
        if (i < v1.size()) {
            result[i] += v1[i];
        }
        if (i < v2.size()) {
            result[i] += v2[i];
        }
    }

    return result;
}

int main() {
    vector<int> v1{1, 2, 3};
    vector<int> v2{4, 5};

    vector<int> sum = sumPairWise(v1, v2);

    cout << "The pairwise sum is: ";
    for (int num : sum) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}