/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: E5.5 Write the following functions

This program will take a number and print the sum of the first, last, and all digits
*/

#include <iostream>
using namespace std;


int sumOfFirst(int num) {
    while(num > 9){
        num/=10;
    }
    return num;
}
int sumOfLast(int num) {
    return num%10;
}
int sumOfAll(int num) {
    int sum = 0;
    while(num > 0){
        sum += num%10;
        num/=10;
    }
    return sum;
}

int main() {
    int num;
    cout<< "Enter a number: ";
    cin>> num;
    cout<< "Sum of first digit: "<< sumOfFirst(num)<< endl;
    cout<< "Sum of last digit: "<< sumOfLast(num)<< endl;
    cout<< "Sum of all digits: "<< sumOfAll(num)<< endl;


    return 0;
}
