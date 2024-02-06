/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3A

This program will ask the user to enter a date and it will print the east basin storage on that date
*/

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>

using namespace std;

int main(){
    string ignore;
    
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}
    string d,date;
    double eastSt, eastEl, westSt, westEl;
    getline(fin, ignore);
    cout<<"Enter date: ";
    cin>>d;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
    if(d==date){
        cout<<"East basin stornge: "<<eastSt<<" billion gallons"<<endl;


    }
}

    return 0;
}