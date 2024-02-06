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

    costper100Miles=gas*100;
    costperMile=tank/gas;
    costperGallon = cost;

    totalCost = gas*tank;
    

    cout<<costper100Miles<<endl;
    cout<<costperMile<<endl;
    cout<<costperGallon<<endl;
    cout<<"The dicstance the car can travel is: "<<totalCost<<" Miles "<<endl;



    return 0;
}