/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: E8.1 Write a program that carries out the following tasks

This program will write a file
*/
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream outFile("hello.txt");

    outFile << "Hello, World!";
    outFile.close();

    ifstream inFile("hello.txt");

    string message;
    getline(inFile, message);
    cout << message << endl;

    return 0;
}
