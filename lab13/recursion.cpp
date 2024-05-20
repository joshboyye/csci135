/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 13

This program will create a function that prints a range of numbers and a function that sums a range of numbers.
*/

#include <iostream>
using namespace std;

bool nestedParens(string s, int index = 0, int balance = 0) {
    if (index == s.size()) {
        return balance == 0;
    }

    if (balance < 0) {
        return false;
    }

    if (s[index] == '(') {
        return nestedParens(s, index + 1, balance + 1);
    } else if (s[index] == ')') {
        return nestedParens(s, index + 1, balance - 1);
    } else {
        return false; // Non-parenthesis character encountered
    }
}

int main() {
    cout << nestedParens("((()))") << endl;  // true (1)
    cout << nestedParens("()") << endl;      // true (1)
    cout << nestedParens("") << endl;        // true (1)

    cout << nestedParens("((((") << endl;    // false (0)
    cout << nestedParens("(()") << endl;     // false (0)
    cout << nestedParens(")(") << endl;      // false (0)
    cout << nestedParens("a(b)c") << endl;   // false (0)

    return 0;
}