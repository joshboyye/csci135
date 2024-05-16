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
/*
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

int sumRange(int left, int right) {
    if (left > right) {
        return 0;
    }
    return left + sumRange(left + 1, right);
}

int sumArray(int *arr, int size) {
    if (size <= 0) {
        return 0;
    }
    return arr[0] + sumArray(arr + 1, size - 1);
}

int main() {
    printRange(-2, 10);
    std::cout << std::endl;

    int x = sumRange(1, 3);
    std::cout << "This is " << x << std::endl;   // 6

    int y = sumRange(-2, 10);
    std::cout << "That is " << y << std::endl;   // 52

    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    std::cout << "Sum is " << sum1 << std::endl;  // Sum is 43

    int sum2 = sumArray(arr, 5); // Add up first five elements
    std::cout << "Sum is " << sum2 << std::endl;  // Sum is 34

    delete[] arr;         // deallocate it

    return 0;
}*/


#include <iostream>
#include <cctype>

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

int sumArray(int *arr, int size) {
    if (size <= 0) {
        return 0;
    }
    return arr[0] + sumArray(arr + 1, size - 1);
}

bool isAlphanumeric(std::string s) {
    if (s.empty()) {
        return true;
    }
    if (!std::isalnum(s[0])) {
        return false;
    }
    return isAlphanumeric(s.substr(1));
}

int main() {
    printRange(-2, 10);
    std::cout << std::endl;

    int x = sumRange(1, 3);
    std::cout << "This is " << x << std::endl;   // 6

    int y = sumRange(-2, 10);
    std::cout << "That is " << y << std::endl;   // 52

    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    std::cout << "Sum is " << sum1 << std::endl;  // Sum is 43

    int sum2 = sumArray(arr, 5); // Add up first five elements
    std::cout << "Sum is " << sum2 << std::endl;  // Sum is 34

    std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)
    std::cout << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
    std::cout << isAlphanumeric("KLMN 8-7-6") << std::endl;  // false (0)

    delete[] arr;         // deallocate it

    return 0;
}
