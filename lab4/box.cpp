/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4A

This program will ask the user to enter the width and height of a box, and it will print a box of that width and height using asterisks.
*/

#include <iostream>
using namespace std;

int main(){
    int width, height;
    cout << "Input width:";
    cin >> width;
    cout << "Input height:";
    cin >> height;
    cout << "Shape:\n";
    for (int i=0; i<height; i++){
        cout<< "*";
        for(int j=0; j<width-1; j++){
            cout << "*";
        }
        cout<<endl;
    }

}

