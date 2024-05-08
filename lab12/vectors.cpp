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
    // Add numbers from 0 to n-1
    for (int i = 0; i < n; ++i) {
        result.push_back(i);
        // result.push_back(i * 2); // Uncomment this line to generate even numbers
    }
    return result;
    // return {1, 2, 3, 4, 5}; // Uncomment this line to return a vector with 1, 2, 3, 4, 5
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
