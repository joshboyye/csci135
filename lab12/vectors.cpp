/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab12 A

This program will create a function that generates a vector of integers from 0 to n-1.
*/

#include <iostream>
#include <vector>

std::vector<int> makeVector(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(i);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the size of the vector: ";
    std::cin >> n;

    std::vector<int> myVector = makeVector(n);

    std::cout << "Vector generated: ";
    for (int i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
