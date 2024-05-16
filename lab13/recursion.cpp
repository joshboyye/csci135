/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 13

THis will create a function that prints a range of numbers from left to right.
*/

#include <iostream>

void printRange(int left, int right) {
    if (left > right) {
        return;
    }
    std::cout << left << " ";
    printRange(left + 1, right);
}

int main() {
    printRange(-2, 10);
    return 0;
}

