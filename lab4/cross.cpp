/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4B

This program will ask the user to enter the size of a cross, and it will print a cross of that size using asterisks and spaces.

*/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int size;
    cout<< "Input size:";
    cin >> size;
    cout << "Shape:\n";
    for (int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(i==j || i+j==size-1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}