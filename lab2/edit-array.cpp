/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Using arrays to store, update, and retrieve numbers.

This program will ask a user to enter two int and it will print the first int to the last int that was entered  
*/

#include <iostream>
using namespace std;

int main(){
    int myData[10];

    for(int i =0; i<10; i++){
        myData[i] =1;
        cout<<myData[i]<<" ";
    }
    cout<<endl;

    
    int x,y;
    do{
        cout<<"Enter the index:";
        cin>>x;

        if(x>=0 && x<10 ){
            cout<<"Enter the value: ";
            cin>>y;

            myData[x] =y;

            for(int i=0; i<10; i++){
                cout<<myData[i] << " ";
            }
            cout<<endl;

        }else{
            cout<<"out of range.\n";
            break;
        }
        
    } while(true);

    return 0;
}