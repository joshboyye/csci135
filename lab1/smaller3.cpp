/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: smaller3.cpp, Lab 1B

This program will check which three number has a smallest int 
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: " << endl;
    cin >> b;

    cout << "Enter the third number: " << endl;
    cin >> c;

    int small = a;

    if (b < small) {
        small = b;
    }
    if (c < small) {
        small = c;
    }

    cout << "The smaller of the three is: " << small << endl;

    return 0;
}
