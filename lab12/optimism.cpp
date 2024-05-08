/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab12 B

This program will create a function that generates a vector of integers from 0 to n-1.

*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> goodVibes(const vector<int>& v) {
    vector<int> result;
    for (int num : v) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> v{1, 2, -1, 3, 4, -1, 6};
    vector<int> filtered = goodVibes(v);

    cout << "Original vector: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Filtered vector (positive integers only): ";
    for (int num : filtered) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
