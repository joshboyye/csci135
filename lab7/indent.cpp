/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab7B this program will indent the code based on the number of brackets

*/
#include <iostream>
#include <cctype>
using namespace std;

int countChar(string line, char c){
    int count =0;
    for(char& i: line){
        if(i == c){
            count++;
        }
    }
    return count;
}


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
    string a;
    int blocks = 0;
    while(getline(cin, a)){
        a = removeLeadingSpaces(a);
        if(a[0] == '}'){
            blocks--;
        }
        for(int i = 0; i < blocks; i++){
            cout << '\t';
        }
        cout << a << endl;
        blocks += countChar(a, '{');
        if(a[0] != '}'){
            blocks -= countChar(a, '}');
        }
    }
    return 0;
}