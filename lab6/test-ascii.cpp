/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab6A

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a ;
    cout << "Enter a line of text: ";
    getline(cin, a);
    // using enhanced for loop to convert each character to its ASCII value and print it
    for (char b : a) {
        cout << b << " " << static_cast<int>(b) << endl;
    }

    return 0;
}