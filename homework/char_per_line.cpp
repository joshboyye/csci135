/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Homework E4.8 - 1 character per line

This program will take a string and print each character on a new line
*/
#include <iostream>
using namespace std;

int main(){
    string a;
    cout << "Enter a string: ";
    cin>>a;

    for(int i=0; i<a.length(); i++){
        cout<<a[i]<<endl;
    }

    return 0;
}