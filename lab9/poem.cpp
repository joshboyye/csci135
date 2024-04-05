
/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab9D

This program will create a poem dynamically and delete it after it is no longer needed.
*/
#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();
        delete p; 
    }
}