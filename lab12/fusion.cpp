/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12 

This program will create a function that fuses two vectors together.

*/

#include <iostream>
#include <vector>

using namespace std;

void gogeta(vector<int>& goku, vector<int>& vegeta) {
    goku.insert(goku.end(), vegeta.begin(), vegeta.end());
    // Clear vegeta
    vegeta.clear();
    // Sort goku
}

int main() {
    vector<int> v1{1, 2, 3};
    // it is possible to initialize a vector like this
    vector<int> v2{4, 5};

    cout << "Before fusion:" << endl;
    cout << "v1: ";
    for (int num : v1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "v2: ";
    for (int num : v2) {
        cout << num << " ";
    }
    cout << endl;

    gogeta(v1, v2);

    cout << "After fusion:" << endl;
    cout << "v1: ";
    for (int num : v1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "v2: ";
    for (int num : v2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
