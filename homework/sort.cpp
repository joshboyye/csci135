/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Homework E5.14

This program will sort two numbers

*/

#include <iostream>
using namespace std;

void sort2(int& a,int& b){
    if(a>b){
        int c=a;
        a=b;
        b=c;
    }
}
int main(){

    int u = 2;
    int v = 3;
    int w = 4;
    int x = 1;
    sort2(u, v); // u is still 2, v is still 3
    sort2(w, x); // w is now 1, x is now 4
    return 0;
}