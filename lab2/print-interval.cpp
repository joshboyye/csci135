/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Input validation, Lab 2B

This program will ask a user to enter two int and it will print the first int to the last int that was entered  
*/

#include <iostream>
using namespace std;

int main(){
    int x,y;

    cout<<"Please enter L:";
    cin>>x;
    cout<<"Please enter U:";
    cin>>y;

    for(int i=x; i<y; i++){
        cout<<i;
        cout<<" ";
    }

    return 0;
}