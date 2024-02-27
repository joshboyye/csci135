/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: E5.6 Write a function

This program will take a string and print the middle character(s)
*/

#include <iostream>
#include <string>
using namespace std;

void middle(string str){
    if(str.length()%2==0){
        cout<<str.substr(str.length()/2-1,2);
    }else{
        cout<<str.substr(str.length()/2,1);
    }
}

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    middle(str);
    return 0;
}