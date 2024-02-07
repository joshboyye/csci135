/*
Author: Joshua Wang
Course: CSCI-136
Instructor: Tong Yi
Assignment: Homework E2.10 - 1 character per line

This program will take a string and print each character 
*/

#include <iostream>
using namespace std;

int main(){
    double cost,tank,gas;
    double costperGallon,costper100Miles,costperMile;
    double totalCost;

    cout<<"Enter the number of gallons of gas in the tank\n";
    cin>>tank;
    cout<<"Enter the fuel efficienty in miles per gallon\n";
    cin>>gas;
    cout<<"Enter the price of gas per gallon\n";
    cin>>cost;

    costper100Miles=(100 / gas) * cost;
    costperMile=cost / gas;
    costperGallon = cost;

    totalCost = tank * cost;
    

    cout<<"Cost per 100 miles: "<<costper100Miles<<endl;
    cout<<"Cost per mile: "<<costperMile<<endl;
    cout<<"Cost per gallon: "<<costperGallon<<endl;
    cout<<"The distance the car can travel is: "<<tank * gas<<" Miles "<<endl;
    cout<<"The total cost to empty the tank is: "<<totalCost<<" Dollars "<<endl;

    return 0;
}