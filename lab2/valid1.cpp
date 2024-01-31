/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Input validation, Lab 2A

This program will check number from range 0<n<100 if the number enter is -1 or <100 it will keep asking the user to enter a integer 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int square;

    while(true){
        cout<<"please enter an integer:";
            cin >> n;
        if(n < 100 && n >= 0){
            square = pow(n,2);
            cout<< "Number squared is" << square <<endl;
            break;
        }else{
            cout << "please re-enter:";
        }

    }

    return 0;
}