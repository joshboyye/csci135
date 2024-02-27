/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: E5.6 Write a function

This program will take a string and a number and print the string n times
*/

#include <iostream>
using namespace std;

void repeat(string str, int n){
    for(int i=0; i<n; i++){
        cout<<str;
    }
}

int main(){
    string str;
    int n;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Enter a number: ";
    cin>>n;
    repeat(str,n);
    return 0;
}