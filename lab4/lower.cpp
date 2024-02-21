/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4B

This program will ask the user to enter the length of a triangle, and it will print a triangle of that length using asterisks and spaces.

*/

#include <iostream>
using namespace std;

int main(){
    int length;
    cout << "Input length:";
    cin>> length;
    cout << "Shape:\n";

    for(int i =0; i<length; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}