/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab10 A

This program will create a class called Time
*/

#include <iostream>
using namespace std;

class Time { 
public:
    int h;
    int m;
   
   Time(int hour, int min){
    h = hour;
    m = min;
   }
   
};
//functions
int minutesSinceMidnight(Time time){
         
         //int totalmins = h + m;
         return time.h * 60 +time.m;
    }
     int minutesUntil(Time earlier, Time later){
        return minutesSinceMidnight(later) - minutesSinceMidnight(earlier);
     }
   
    

int main(){
     int earlier_hour;
     int earlier_min;
     int later_hour;
     int later_min;


     cout<<"Enter first time: ";
     cin>>earlier_hour>>earlier_min;

     cout<<"Enter a second time: ";
     cin>>later_hour>>later_min;
    
       Time time(earlier_hour,earlier_min);

        int minutes = minutesSinceMidnight(time);
        cout<<"These moments of time are "<< time.h <<" and "<<time.m<<" minutes after midnight."<<endl;


        Time earlier = time; 
        Time later(later_hour,later_min);

      int minsDifference = minutesUntil(earlier,later);
      cout<< "The interval between them is "<< minsDifference << " minutes."<<endl;


    return 0;
}