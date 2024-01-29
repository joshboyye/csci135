/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Lab 1C

This program will check if the year is leap or not 
*/

#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter a year:";
    cin>>year;
    
    if(year%4){
        cout<<"Common Year\n";
    }else if(year % 100){
        cout<<"Leap Year\n";
    }else if( year % 400){
        cout<<"Common Year\n";
    }else{
        cout<<"Leap Year";
    }


    return 0;
}