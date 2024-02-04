/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Input validation, Lab 2D

This program will print the first 60 fibonacci numbers
*/

#include <iostream>
using namespace std;

int main(){
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    cout << fib[0] << endl;
    cout << fib[1] << endl;
    
    for(int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
        cout<<fib[i]<<endl;
    }

    return 0;
}