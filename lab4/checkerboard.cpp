/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4B

This program will ask the user to enter the width and height of a checkerboard, and it will print a checkerboard of that width and height using asterisks and spaces.

*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int width, height;
    cout << "Input width:";
    cin >> width;
    cout << "Input height:";
    cin >> height;
    cout << "Shape:\n";
    
    for (int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            if((i+j)%2 == 0){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}