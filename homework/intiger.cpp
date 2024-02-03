/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Homework E3.1 - Positive or Zero or Negative

This program will check if the number is postivie or negative number or zero 
*/

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a any integer";
    cin>>a;
    if(a<0){
        cout<<a<<": this is a negative number \n";
    }else if(a==0){
        cout<<a<<" is zero \n";
    }else{
        cout<< a << ": this is a positive number \n";
    }

    return 0;
}