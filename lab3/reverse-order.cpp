/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3D

This program will ask the user to enter a starting date and an ending date, and it will print the west basin elevation for all dates in that range.
*/

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;
const int MAX = 10000;

int main(){
    string ignore;
    
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    
    string start, end;
    string dates[MAX];
    double westElevations[MAX];
    double eastSt, eastEl, westSt, westEl;
    int numRecords =0;
    string date;
    getline(fin, ignore);
    
    cout << "Enter starting date: ";
    cin >> start;
    cout << "Enter ending date: ";
    cin >> end;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        fin.ignore(INT_MAX, '\n'); // skips to the end of line, ignoring the remaining columns 

        if(date >= start && date <= end) {
            dates[numRecords] = date;
            westElevations[numRecords] = westEl;
            numRecords++;
        }
    }
    for(int i = numRecords - 1; i >= 0; i--) {
        cout << dates[i] << ": " << westElevations[i] << endl;
    }

    return 0;
}