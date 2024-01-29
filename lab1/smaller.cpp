/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 1 A

This program will check which two number has a bigger int 
*/
#include <iostream>
using namespace std;
int main(){
    int a =0;
    int b =0;
    cout<<"Enter the first number:";
    cin>>a;

    cout<<"Enter the second number:"<<endl;
    cin>>b;

    int s = (a<b) ? a : b;

    cout<<"The smaller of the two is"<<s<<endl;

    return 0;
}