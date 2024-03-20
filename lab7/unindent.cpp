/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab7A this program removes leading spaces from a string

*/
#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line){
    string newLine;
    bool found = false;
    for(char& c: line){
        if(!isspace(c)){
            found = true;
        }
        if(found){
            newLine+=c;
        }
    }
    return newLine;
}
int main(){
    string line;
    while(getline(cin, line)){
        cout << removeLeadingSpaces(line) << endl;
    }
    return 0;
}