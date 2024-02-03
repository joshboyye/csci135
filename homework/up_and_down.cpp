/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Homework E3.5 - Increasing, Decreasing or Neither

This program will check if the number is increasing or not 
*/

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a;
    cin>>b;
    cin>>c;
    
    if(a<b && b<c ){
        cout<<"Increasing\n";
    }else if(a>b && b>c){
        cout<<"Decreasing\n";
    }else{
        cout<<"neither\n";
    }

    return 0;
}