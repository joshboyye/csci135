/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3B

This program will find the minimum and maximum storage in the East basin in 2018
*/
#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(){
    string date, ignore;
    double eastSt, eastEl, westSt, westEl;
    double min = std::numeric_limits<double>::max(), max = std::numeric_limits<double>::lowest();

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    getline(fin, ignore); // ignore the header line

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        if (date.substr(6, 4) == "2018") { // check if the year is 2018
            if (eastSt < min) {
                min = eastSt;
            }
            if (eastSt > max) {
                max = eastSt;
            }
        }

        fin.ignore(INT_MAX, '\n'); // skips to the end of line, ignoring the remaining columns 
    }

    cout << "Minimum storage in East basin in 2018: " << min << endl;
    cout << "Maximum storage in East basin in 2018: " << max << endl;

    return 0;
}