/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 13

This program will create a function that prints a range of numbers and a function that sums a range of numbers.
*/
/*
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

*/
#include <iostream>

void printRange(int left, int right) {
    if (left > right) {
        return;
    }
    std::cout << left << " ";
    printRange(left + 1, right);
}

int sumRange(int left, int right) {
    if (left > right) {
        return 0;
    }
    return left + sumRange(left + 1, right);
}

int main() {
    printRange(-2, 10);
    std::cout << std::endl;

    int x = sumRange(1, 3);
    std::cout << "This is " << x << std::endl;   // 6

    int y = sumRange(-2, 10);
    std::cout << "That is " << y << std::endl;   // 52

    return 0;
}
